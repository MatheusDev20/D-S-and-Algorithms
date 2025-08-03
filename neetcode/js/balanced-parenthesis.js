// Warmup: write a function that takes a string of parentheses as an argument and returns true if the parentheses are balanced

// e.g. (())() == true, ()) == false

/**
 * 
 * @param {string} str 
 */
const isBalanced = (str) => {
  let b = 0
  for(const p of str) {
    if(p === "(") { b++ } else if (p === ")") { b -- }

    if (b < 0) return false;
  } 


  return b === 0
}

console.log(isBalanced("()((())))()()"))
console.log(isBalanced("(())()"))

