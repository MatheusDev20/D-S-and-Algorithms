// Bruteforce O(n^2)

const hasDuplicate = (nums) => {
  for(let i = 0; i<nums.length; i++) {
    for(let j = i+1; j<nums.length; j++) {
      if(arr[i] === nums[j]) return true
    }
  }
  return false
}
// O(n)
const hasDuplicateBetter = (nums) => {
  const seen = new Set();
  for (const num of nums) {
    if (seen.has(num)) return true; // Found a duplicate
    seen.add(num);
  }
  return false; // No duplicates
};