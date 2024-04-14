import React, { useEffect, useState } from 'react'
import Card from './components/Card'
import Button from './components/Button'
import './index.css'
import { ThemeProvider } from './context/themeContext'

function App() {
  const [theme, setTheme] = useState('light')

  const toggleTheme = () => {
    if (theme == 'light')
      setTheme('dark')
    else
      setTheme('light')
  }

  useEffect(() => {
    const rootElement = document.getElementById('root')
    rootElement.classList.remove('light', 'dark')
    rootElement.classList.add(`${theme}`)
  }, [theme, toggleTheme])

  return (
    <ThemeProvider value={{ theme, toggleTheme }}>
      <div className='w-1/3 h-1/3 m-20'>
        <Button />
        <Card />
      </div>
    </ThemeProvider>
  )
}

export default App
