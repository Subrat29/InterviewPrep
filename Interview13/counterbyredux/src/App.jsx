import React from 'react'
import Display from './components/Display'
import IncCounter from './components/IncCounter'
import DecCounter from './components/DecCounter'
import store from "./components/store/store";
import { Provider } from 'react-redux';

function App() {
    return (
        <Provider store={store}>
            <div>
                <h1>Counter Functionality</h1>
                <Display />
                <IncCounter />
                <DecCounter />
            </div>
        </Provider>

    )
}

export default App
