import React from 'react';
import Child_props from './Child_props';

function Greeting() {
    return (
        <div>
            <h1>This is a parent</h1>
            <Child_props name="Vraj" surname="Patel" />
        </div>
    );
}

export default Greeting;
