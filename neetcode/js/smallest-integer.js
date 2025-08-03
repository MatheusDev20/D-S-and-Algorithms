/* https://leetcode.com/problems/first-missing-positive/description/ */

/**
 * 
 * @param {Array} A 
 */
const solution = (A) => {
  const len = A.length

  for(let i = 0; i < A.length; i++) {
    if(A[0] < 0 || A[i] > n) A[i] = len + 1
  }
}