import { createContext, useContext, useState } from "react";

const todoContext = createContext({
    user: "",
    pass: ""
})

export const TodoProvider = todoContext.Provider;

const useTodo = () => {
    return useContext(todoContext)
}
export default useTodo