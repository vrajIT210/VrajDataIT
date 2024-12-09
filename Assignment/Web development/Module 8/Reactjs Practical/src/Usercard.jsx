import React from 'react';
import Propscard from './Propscard';

// Functional component UserCard
function UserCard() {
  return (
    <div>
      <h1>This is a parent</h1>
      <Propscard name="Vraj Patel" age={21} location="Nikol" />
      <Propscard name="Het Patel" age={20} location="Maninagar" />
    </div>
  );
}
export default UserCard;