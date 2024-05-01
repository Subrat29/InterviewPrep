// We have given an array of intergers you have to calculate
// ∑i=0 to i=n-1 (-1)i * (array[i)) using recursion in javascript. 

function solve(arr, i, n) {
    if (i == n)
        return 0;

    if (i % 2 != 0)
        return -arr[i] + solve(arr, i + 1, n);

    return arr[i] + solve(arr, i + 1, n);
}

const arr = [1,1,1,1,1,1,1];
const n = 5;
const ans = solve(arr, 0, n);
console.log("ans: ", ans);

