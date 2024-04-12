import React, { useState } from 'react'
import Login from './components/Login'
import Profile from './components/Profile'
import { TodoProvider } from './context/todoContext'

function App() {
  const [user, setUser] = useState({})

  return (
    <TodoProvider value={{ user, setUser }}>
      <Login />
      <Profile />
    </TodoProvider>
  )
}

export default App
