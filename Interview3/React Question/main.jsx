// Ques: 🥳Create a counter functionality, when we press the button then counter value increases🫵

import { StrictMode ,useState,useCallback} from "react";
import ReactDOM from "react-dom";

// Basic React: The react updates its state in baches/groups.
	
function App() {
	
	const [counter,setCounter]=useState(0);
	const ClickHandler=()=>{
		setCounter((prevCount)=>prevCount+1);
		setCounter((prevCount)=>prevCount+1);
		setCounter((prevCount)=>prevCount+1);
		setCounter((prevCount)=>prevCount+1);
		
	}
	return (
		<div className="App">
			<h2></h2>
			<h1>My value is {counter}</h1>
			<button onClick={ClickHandler}>Counter</button>
		</div>
	);
}

const rootElement = document.getElementById("root");
ReactDOM.render(
	<StrictMode>
		<App />
	</StrictMode>,
	rootElement
);