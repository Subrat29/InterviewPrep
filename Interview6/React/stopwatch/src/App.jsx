import React, { useEffect, useState } from 'react'

function App() {

  const [sec, setSec] = useState(0)
  const [min, setMin] = useState(0)
  const [hour, setHour] = useState(0)
  const [isRunning, setIsRunning] = useState(true)

  const stopWatch = () => {
    setSec(prevSec => prevSec + 1)
    if (sec === 59) {
      setMin(prevMin => prevMin + 1)
      setSec(0)
    }
    if (min === 60) {
      setHour(prevHour => prevHour + 1);
      setMin(0)
    }
  }

  const padding = (num) => {
    if (num < 10)
      return '0' + num
    else
      return num
  }

  useEffect(() => {
    const intervalId = isRunning ? setInterval(stopWatch, 1000) : null
    return () => clearInterval(intervalId)
  }, [sec, isRunning])

  const start = () => {
    setIsRunning(true)
  }
  const pause = () => {
    setIsRunning(false)
  }
  const reset = () => {
    setSec(0)
    setMin(0)
    setHour(0)
    pause()
  }

  return (
    <div>
      <h1>{padding(hour)}:{padding(min)}:{padding(sec)}</h1>
      <button onClick={start}>Start</button>
      <button onClick={pause}>Pause</button>
      <button onClick={reset}>Reset</button>
    </div>
  )
}

export default App
