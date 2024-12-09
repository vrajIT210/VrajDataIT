import React from 'react';
import Greeting from './Greeting';
import Welcomemess from './Welcomemess';
import UserCard from './Usercard';
import Counter from './Counter';


function App() {
  const jsx = "JSX is a syntax extension for JavaScript that looks similar to HTML. It allows us to write UI elements in JavaScript, which React can render.";
  return (
    <div>
      <h1></h1>
      <h1>Welcome to JSX</h1>
      <p>{jsx}</p>

      <Greeting />
      <Welcomemess />
      <UserCard />
      <Counter />
    </div>
  );
}
export default App;