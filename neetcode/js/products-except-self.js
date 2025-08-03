
class Solution {
  /**
   * @param {number[]} nums
   * @return {number[]}
   */
  // O(n^2) shit
  productExceptSelf(nums) {
      const result = []
      for(let i=0; i<nums.length; i++) {
        const except = nums.filter((_, index) => index !== i)
        const product = except.reduce((acc, curr) => acc * curr, 1)
        result.push(product)
      }

      return result
  }

  productExceptSelfBetter(nums) {
    const n = nums.length;
    const result = new Array(n).fill(1);
    let left = 1;
    for (let i = 0; i < n; i++) {
      result[i] = left;
      left = left * nums[i]
      // left *= nums[i];
    }

    let right = 1;
    for (let i = n - 1; i >= 0; i--) {
      result[i] *= right;
      right *= nums[i];
    }

    return result;
  }
}

const s = new Solution()
const input = [1,2,4,6]
console.log(s.productExceptSelfBetter(input))