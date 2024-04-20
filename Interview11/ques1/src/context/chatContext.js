import { createContext, useContext } from "react";

const chatContext = createContext({
    chats: [{}]
})

export const ChatProvider = chatContext.Provider;

const useChat = () => {
    return useContext(chatContext)
}

export default useChat