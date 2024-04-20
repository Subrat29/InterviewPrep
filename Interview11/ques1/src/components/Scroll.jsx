import React from 'react'
import useChat from '../context/chatContext'

function Scroll() {
    const { chats } = useChat()

    return (
        <div style={{height:'200px', backgroundColor: "grey", overflowY: "scroll", scrollbarWidth: "none"}}>
            {
                chats.map((chat) => (
                    <div key={chat.id}>
                        <label>{chat.sender}</label>
                        <label>{chat.message}</label>
                    </div>
                ))
            }
        </div>
    )
}

export default Scroll
