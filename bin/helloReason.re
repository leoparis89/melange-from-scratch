/* Reason React App */

module Dayjs = Hello_melange.Dayjs;

module App = {
  [@react.component]
  let make = () => {
    let (count, setCount) = React.useState(() => 0);
    
    let now = Dayjs.make();
    let formatted = Dayjs.format(now, "MMMM DD, YYYY");
    
    <div>
      <h1> {React.string("Hello from Reason React!")} </h1>
      <p> {React.string("Today is: " ++ formatted)} </p>
      
      <div style={ReactDOM.Style.make(~marginTop="20px", ())}>
        <p> {React.string("Counter: " ++ string_of_int(count))} </p>
        <button onClick={_ => setCount(_ => count + 1)}>
          {React.string("Increment")}
        </button>
        {React.string(" ")}
        <button onClick={_ => setCount(_ => count - 1)}>
          {React.string("Decrement")}
        </button>
        {React.string(" ")}
        <button onClick={_ => setCount(_ => 0)}>
          {React.string("Reset")}
        </button>
      </div>
    </div>;
  };
};

/* Mount the React app */
let root = ReactDOM.querySelector("#root");
switch (root) {
| Some(element) => {
    let reactRoot = ReactDOM.Client.createRoot(element);
    ReactDOM.Client.render(reactRoot, <App />);
  }
| None => Js.log("Root element not found")
};

