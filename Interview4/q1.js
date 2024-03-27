// Write a JavaScript function to find the largest element in an array of numbers.

const findLargestElement = (arr) => {
    var ans = 0
    arr.forEach(element => {
        if (element > ans)
            ans = element
    });
    return ans
}

const arr = [5, 2, 9, 11, 4]
const largestElem = findLargestElement(arr)
console.log(largestElem)