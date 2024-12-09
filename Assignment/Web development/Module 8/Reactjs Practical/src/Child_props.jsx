import React from 'react'

function Child_props({ name, surname }) {
    return (
        <div>
            <h1>My name : {name}</h1>
            <h1>surname : {surname}</h1>
        </div>
    )
}

export default Child_props;
