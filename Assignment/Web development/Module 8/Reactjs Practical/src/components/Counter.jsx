import React, { useState } from 'react'

function Counter() {
    const [count,setcount]=useState(0)

  return (
    <div>
        <h1>count {count}</h1>
        <button onClick={()=>setcount(count+1)}>increment </button>

      
    </div>
  )
}

export default Counter
