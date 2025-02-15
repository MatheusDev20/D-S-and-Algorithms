// Two Pointer Technique

// Used to traverse sorted Arrays optimizing the Time and space complexity
function twoSum(arr, target) {
  let left = 0, right = arr.length - 1
  while (left < right) {
    let sum = arr[left] + arr[right]
    if(sum === target) {
      return [arr[left], arr[right]]
    } else if(sum < target) left ++
      else right --
  }
  return []
}

function squaresOfSortedArray(arr) {
  let left = 0, right = arr.length - 1
  let squarArr = new Array(arr.length)
  let index = arr.length - 1

  while(left <= right) {
    let leftSquare = arr[left] * arr[left]
    let rightSquare = arr[right] * arr[right]
    if(leftSquare > rightSquare) {
      squarArr[index] = leftSquare
      left++
    }
    else {
      squarArr[index] = rightSquare
      right--
    }
    index--
  }
  return squarArr
}

console.log(squaresOfSortedArray([3,5,7,9,12,14,53]))