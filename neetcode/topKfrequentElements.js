class Solution {
  /**
   * @param {number[]} nums
   * @param {number} k
   * @return {number[]}
   */
  topKFrequent(nums, k) {
    const frequency = {}
    for(let i = 0;i< nums.length; i++) {
      frequency[nums[i]] = (frequency[nums[i]] || 0) + 1
    }
    return Object.entries(frequency)
    .sort((a, b) => b[1] - a[1])
    .slice(0, k)
    .map(([num]) => Number(num));
  }
}

const s = new Solution()

console.log(s.topKFrequent([1,2,2,3,3,3], 2))

