import React, { useState } from 'react'
import Input from './components/Input'
import Button from './components/Button'

function App() {
  const [fromCurr, setFromCurr] = useState(0)
  const [toCurr, setToCurr] = useState(0)
  const [curr, setCurr] = useState('inr')
  const [curr2, setCurr2] = useState('usd')

  const swap = () => {
    const flag = curr;
    setCurr(curr2)
    setCurr2(flag)
  }

  const convert = () => {
    if (curr == 'inr') {
      setToCurr(fromCurr * 83)
    }
    else {
      setToCurr(fromCurr * 0.011)
    }
  }

  return (
    <>
      <h1>Convert {curr2}💸 to 💰{curr}</h1>
      <Input
        label="From"
        curr={fromCurr}
        setCurr={setFromCurr}
      />
      <Button
        label="swap"
        onClickHandler={swap}
      />
      <Input
        label="To"
        curr={toCurr}
        setCurr={setToCurr}
      />
      <br />
      <Button
        label="convert"
        onClickHandler={convert}
      />
    </>
  )
}

export default App
