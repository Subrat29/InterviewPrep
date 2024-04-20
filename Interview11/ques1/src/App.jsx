import React, { useState } from 'react'
import { ChatProvider } from './context/chatContext'
import Scroll from './components/Scroll'

function App() {
  const [chats, setChats] = useState([
    {
      id: '1',
      sender: "sender1",
      receiver: "receiver1",
      message: "xyz"
    },
    {
      id: '2',
      sender: "sender2",
      receiver: "receiver2",
      message: "xyz"
    },
    {
      id: '3',
      sender: "sender3",
      receiver: "receiver3",
      message: "xyz"
    },
    {
      id: '4',
      sender: "sender1",
      receiver: "receiver1",
      message: "xyz"
    },
    {
      id: '5',
      sender: "sender2",
      receiver: "receiver2",
      message: "xyz"
    },
    {
      id: '6',
      sender: "sender3",
      receiver: "receiver3",
      message: "xyz"
    },
    {
      id: '7',
      sender: "sender1",
      receiver: "receiver1",
      message: "xyz"
    },
    {
      id: '8',
      sender: "sender2",
      receiver: "receiver2",
      message: "xyz"
    },
    {
      id: '9',
      sender: "sender3",
      receiver: "receiver3",
      message: "xyz"
    },
    {
      id: '10',
      sender: "sender2",
      receiver: "receiver2",
      message: "xyz"
    },
    {
      id: '11',
      sender: "sender3",
      receiver: "receiver3",
      message: "xyz"
    },
    {
      id: '12',
      sender: "sender2",
      receiver: "receiver2",
      message: "xyz"
    },
    {
      id: '13',
      sender: "sender3",
      receiver: "receiver3",
      message: "xyz"
    }
  ])

  return (
    <ChatProvider value={{ chats, setChats }}>
      <div>
        <h1>Question 1</h1>
        <Scroll />
      </div>
    </ChatProvider>
  )
}

export default App
