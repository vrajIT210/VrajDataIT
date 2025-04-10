import React, { useState } from "react";

const SearchFilter = () => {
  const [searchTerm, setSearchTerm] = useState("");
  
  const items = ["Banana", "Apple", "Orange", "Mango", "Pineapple", "Watermelon"];
  
  // Filter items based on search term
  const filteredItems = items.filter(item => 
    item.toLowerCase().includes(searchTerm.toLowerCase())
  );

  return (
    <div>
      <h2>Search Filter</h2>
      <label>Search: </label>
      <input 
        type="text" 
        value={searchTerm} 
        onChange={(e) => setSearchTerm(e.target.value)}
        placeholder="Type to search..."
      />
      <ul>
        {filteredItems.map((item, index) => (
          <li key={index}>{item}</li>
        ))}
      </ul>
    </div>
  );
};

export default SearchFilter;
