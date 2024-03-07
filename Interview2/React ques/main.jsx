// Ques- Create an input field in one component and a button in another component.
// Implement functionality such that when the button is clicked, the data in the
// input field will be cleared using the useRef hook.


import { StrictMode, useRef, useState } from "react";
import ReactDOM from "react-dom";

function App() {
    const inputRef = useRef(null);
    return (
        <div className="App">
            <Component1 reference={inputRef} />
            <Component2 reference={inputRef} />
        </div>
    );
}

function Component1({ reference }) {
    const [text, setText] = useState('')
    return (
        <>
            <input
                value={text}
                type='text'
                placeholder='write here...'
                ref={reference}
                onChange={(e) => { setText(e.target.value) }}
            />
        </>
    );
}

function Component2({ reference }) {
    const onClickHandler = () => {
        reference.current.value = "";
    }
    return (
        <>
            <button
                onClick={onClickHandler}
            >Clear text</button>
        </>
    );
}

const rootElement = document.getElementById("root");
ReactDOM.render(
    <StrictMode>
        <App />
    </StrictMode>,
    rootElement
);