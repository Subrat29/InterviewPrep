import React, { useState } from 'react'


function App() {
  const [todos, setTodo] = useState([])
  const [additem, setAdditem] = useState('')
  const [deleteitem, setDeleteitem] = useState('')

  // const sortTodo = () => {
  //   const sortedTodo = todos.sort((a, b) => a - b)
  //   setTodo(sortedTodo)
  // }

  const print = () => {
    console.log("Display List: ")
    {
      todos.map((todo) => (
        console.log(todo)
      ))

    }
  }

  const addItem = (e) => {
    e.preventDefault();
    setTodo([...todos, additem])
    setAdditem('')
    print()
  }

  const deleteItem = (e) => {
    e.preventDefault();
    let array = todos;
    let updatedTodo = array.filter((todo) => todo !== deleteItem)
    setTodo(updatedTodo)
    setDeleteitem('')
    print()
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
        {todos.map((todo) => (
          <li key={todo}>{todo}</li>
        ))}
      </ul>

    </div>
  )
}

export default App
