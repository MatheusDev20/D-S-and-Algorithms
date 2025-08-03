class Solution {
  isPalindrome(s) {
    // Clear non alphanumerical from the string
    const cleared = s.replace(/[^a-zA-Z0-9]/g, '').trim().toLowerCase()
    let l = 0
    let r = cleared.length - 1

    while(l < r) {
      if(cleared[l] !== cleared[r]) {
        return false
      }
      l++
      r--
    }

    return true
  }
}

const s = new Solution()
console.log(s.isPalindrome("Was it a car or a cat I saw?"))