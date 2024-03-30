// Q2: Fix the code below:

import React from 'react';
function Welcome(props) {
    if (props.isLoggedIn)
        return <h1>Welcome back!</h1>;
    else
        return <h1>Please log in.</h1>;
}
export default Welcome;

// Answer: The code has a syntax error.The else statement is missing a closing brace(}).
