import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { decreaseCounter } from './store/counterSlice'

function DecCounter() {
    const cnt = useSelector((state) => state.counter.cnt)
    const dispatch = useDispatch()

    const onclickHandler = (e) => {
        e.preventDefault();
        dispatch(decreaseCounter(cnt - 1))
    }

    return (
        <button
            onClick={onclickHandler}
        >Dec</button>
    )
}

export default DecCounter
