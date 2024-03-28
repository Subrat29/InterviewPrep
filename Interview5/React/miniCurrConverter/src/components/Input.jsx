import React, { useState } from 'react'

function Input({
    label,
    curr,
    setCurr
}) {
    // const [input, setInput] = useState(curr)
    const onchangeHandler = (e) => {
        setCurr(e.target.value)
    }

    return (
        <div>
            <input
                type="text"
                value={curr}
                placeholder={label}
                onChange={onchangeHandler}
            />
        </div>
    )
}

export default Input
