// var: Used to declare variables globally or function-scoped.
// Variables declared with var can be reassigned and redeclared within their scope.

// let: Introduced in ES6, let is used to declare block-scoped variables.
// Variables declared with let can be reassigned but not redeclared within the same block scope.

// const: Also introduced in ES6, const is used to declare constants,
// which are block-scoped and cannot be reassigned or redeclared once initialized.


const a = 1
console.log("a1: ", a);
var b = 2
console.log("b1: ", b);
let c = 9
console.log("c1: ", c)

{
    const a = 3
    console.log("a2: ", a);
    var b = 4
    console.log("b2: ", a);
    let c = 95
    console.log("c1: ", c)
}

// const a = 45
console.log("a3: ", a);
var b = 5
console.log("b3: ", b);
// let c = 9
console.log("c1: ", c)










