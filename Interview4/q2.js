// Implement a function in JavaScript to reverse a string without using built-in functions.

function reverseString(s) {
    var str = ""
    for (let i = s.length - 1; i >= 0; i--)
        str += s[i];
    return str
}

const input = "hippo"
const output = reverseString(input)
console.log("Output: ", output)