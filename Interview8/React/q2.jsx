//Q3: What will be the output when the user types in the input field:
// Everything is fine, so op is whatever u types

function App() {
    const [value, setValue] = useState("");
    function handleChange(event) {
        setValue(event.target.value);
    }

    return (
        <div>
            <input type="text" value={value} onChange={handleChange} />
            <p>You entered: {value}</p>
        </div>
    );
}
