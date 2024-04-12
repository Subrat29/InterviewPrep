import React from 'react'
import useTodo from '../context/todoContext'

function Profile() {
    const {user} = useTodo()
    return user ? <div>Username: {user.name} <br /> Password: {user.pass}</div> : null
}

export default Profile
