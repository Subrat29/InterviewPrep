import React from 'react'

function Button({ label, onClickHandler }) {

    return (
        <div>
            <button onClick={onClickHandler}>{label}</button>
        </div>
    )
}

export default Button
