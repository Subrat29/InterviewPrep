import { useContext } from "react";
import { createContext } from "react";

const themeContext = createContext({
    theme: 'light',
    toggleTheme: () => { }
})

export const ThemeProvider = themeContext.Provider;

const useTheme = () => {
    return useContext(themeContext)
}
export default useTheme