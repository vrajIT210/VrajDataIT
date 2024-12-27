import React from 'react';
import App1 from './App1';
import App2 from './App2';
//import Greeting from './Greeting';
//import Welcomemess from './Welcomemess';
//import UserCard from './Usercard';
//import Counter from './Counter';
//import Counter1 from './Counter1';


function App() {
  const jsx = "JSX is a syntax extension for JavaScript that looks similar to HTML. It allows us to write UI elements in JavaScript, which React can render.";
  return (
    <div>
      <h1></h1>
      {/* <h1>Welcome to JSX</h1> */}
      {/* <p>{jsx}</p> */}

      {/* <Greeting />
      <Welcomemess />
      <UserCard />
      <Counter /> 
      <Counter1 />
      <App1 /> */}
      <App2 />
    </div>
  );
}
export default App;