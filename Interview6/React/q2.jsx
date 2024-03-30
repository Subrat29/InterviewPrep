// Q4: Identify and fix any performance issues in the following code that renders a large list of items:

import React from 'react';
const MyComponent = ({ items }) => (
    <div>
        {items.map((item) => (
            <Item key={item.id} item={item} />
        ))}
    </div>
);
const Item = ({ item }) => (
    <div>
        <p>{item.name}</p>
        <p>{item.description}</p>
        {/* More complex rendering logic */}
    </div>
);
export default MyComponent;

// Answer: The issue with the code is that it doesn’t provide a unique key for each item in the map function. To fix this, we can use the item.id as the key for the < Item > component.
