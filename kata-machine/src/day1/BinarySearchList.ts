export default function bs_list(haystack: number[], needle: number): boolean {
  let low = 0;
  let high = haystack.length

  do {
    const m = Math.floor(low + (low + high) / 2)
    const v = haystack[m]
    if(v === needle) {
      return true
    } else if(v > needle) {
        high = m
    } else {
      low = m + 1
    }
  }

  while(low < high)
  return false
}

const arr = [1,10,23,54,67,89,100,123,234,567,789,1000]
const needle = 23
console.log(bs_list(arr, needle)) // true