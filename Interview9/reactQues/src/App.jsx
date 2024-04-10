import React, { useState } from 'react'

function App() {
  const [todos, setTodo] = useState([])
  const [additem, setAdditem] = useState('')
  const [deleteitem, setDeleteitem] = useState('')

  const addItem = (e) => {
    e.preventDefault();
    setTodo([...todos, additem])
    setAdditem('')
  }

  const deleteItem = (e) => {
    e.preventDefault();
    const updatedTodo = todos.filter((todo) => todo !== deleteitem)
    setTodo(updatedTodo)
    setDeleteitem('')
  }

  return (
    <div>
      <input
        type="number"
        placeholder='Add Item'
        value={additem}
        onChange={(e) => { setAdditem(e.target.value) }}
      />
      <button onClick={addItem}>Add</button>
      <br />

      <input
        type="number"
        placeholder='Delete Item'
        value={deleteitem}
        onChange={(e) => { setDeleteitem(e.target.value) }}
      />
      <button onClick={deleteItem}>Delete</button>

      <h1>Display List</h1>
      <ul>
        {todos.sort((a,b)=>a-b).map((todo) => (
          <li key={todo}>{todo}</li>
        ))}
      </ul>

    </div>
  )
}

export default App
