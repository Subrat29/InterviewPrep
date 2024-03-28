// Q1. What will be the output of the below code if the button is clicked:

function App() {
    const [count, setCount] = useState(0);
    useEffect(() => {
        console.log("Component rendered successfully"); //Trick is here it displays on console not screen:)
    }, []);
    return (
        <div>
            <button onClick={() => setCount(count + 1)}>Click me</button>
            <p>You clicked {count} times</p>
        </div>
    );
}
