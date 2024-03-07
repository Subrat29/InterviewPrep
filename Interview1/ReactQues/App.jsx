import { StrictMode, useState } from "react";
import ReactDOM from "react-dom";

function App() {
	const [show, setshow] = useState(false);
	const [type, setType] = useState("Show");
	
	const onclickHandler = () => {
		if (type === "Show")
			setType("Hide");
		else
			setType("Show")
		setshow(!show);
	}

	return (
		<div className="App">
			<input type={show ? "password" : "text"} />
			<button onClick={onclickHandler}>{type}</button>
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