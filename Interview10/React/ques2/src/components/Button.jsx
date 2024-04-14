import React from 'react'
import useTheme from '../context/themeContext';

function Button() {
    const { theme, toggleTheme } = useTheme()

    const onClickHandler = (e) => {
        e.preventDefault();
        toggleTheme();
    }

    return (
        <div>
            <button
                type='button'
                className="m-2 text-white bg-blue-700 hover:bg-blue-800 focus:ring-4 focus:outline-none focus:ring-blue-300 font-medium rounded-lg text-sm px-5 py-2.5 text-center dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
                onClick={onClickHandler}
            >{theme}</button>
        </div>
    )
}

export default Button
