// Write a javascript function that determine sum of top  5 maximum numbers in array. 

const arr = [1, 3, 6, 6, 3, 32, 93, 123, 977, 33, 1, 5, 89, 21, 4]

const findTop5Max = () => {
    arr.sort((a, b) => a - b)
    console.log(arr);
    let sum = 0;
    for (let i = arr.length - 1; i >= arr.length - 5; i--) {
        sum += arr[i];
    }
    return sum;
}

const ans = findTop5Max(arr);
console.log("Ans: ", ans)