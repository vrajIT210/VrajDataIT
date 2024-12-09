import React, { useState } from 'react';

function Counter() {
  const [count, setCount] = useState(0);

  const increment = () => {
    setCount(count + 1);
  };
  const decrement =()=>{
    setCount(count - 1);
  }
  const zero =()=>{
    setCount(0);
  }

  return (
    <div>
      <h1>Current Count: {count}</h1>
      <button onClick={increment}>Increment</button>
      <button onClick={decrement}>decrement</button>
      <button onClick={zero}>zero</button>
    </div>
  );
}
export default Counter;