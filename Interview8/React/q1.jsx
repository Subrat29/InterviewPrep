// Q2: Find the issue in the below code snippet after rendering the list of names.

/*
import React from "react";
function App() {
    const names = ["Brian", "Paul", "Krug", "Halley"];
    const listItems = names.map((name) => <li key={name}>{name}</li>);
    return <ul>{listItems}</ul>;
}
export default App;
*/

// Question 3: Analyze the below code and advise what is wrong with using setState() inside the render() method.
// When you call setState within render, it triggers a re-render of the component, which in turn calls render
//  again, leading to an endless cycle of updates.

import React, { Component } from "react";
class App extends Component {
    state = {
        counter: 0,
    };

    // we can use it like that
    // incrementCounter = () => {
    //     this.setState({ counter: this.state.counter + 1 });
    // };

    render() {
        this.setState({ counter: this.state.counter + 1 });
        return <div>Counter: {this.state.counter}</div>;
    }
}
export default App;
