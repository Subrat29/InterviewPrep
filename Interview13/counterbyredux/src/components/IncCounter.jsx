import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { increaseCounter } from './store/counterSlice'

function IncCounter() {
    const cnt = useSelector((state) => state.counter.cnt)
    const dispatch = useDispatch()

    const onclickHandler = (e) => {
        e.preventDefault();
        dispatch(increaseCounter(cnt + 1))
    }

    return (
        <button
            onClick={onclickHandler}
        >Inc</button>
    )
}

export default IncCounter
