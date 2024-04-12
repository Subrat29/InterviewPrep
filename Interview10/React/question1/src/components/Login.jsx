import React, { useState } from 'react'
import useTodo from '../context/todoContext'

function Login() {
    const [name, setName] = useState('')
    const [pass, setPass] = useState('')
    const {setUser } = useTodo()

    const onClickHandler = (e) => {
        e.preventDefault()
        setUser({ name, pass })
        setName('')
        setPass('')
    }

    return (
        <div>
            <label >Username: </label>
            <input
                placeholder='username'
                value={name}
                onChange={(e) => { setName(e.target.value) }}
            />
            <br />
            <label >Password: </label>
            <input
                placeholder='password'
                value={pass}
                onChange={(e) => { setPass(e.target.value) }}
            />
            <br />
            <button onClick={onClickHandler}>Submit</button>
        </div>
    )
}

export default Login
