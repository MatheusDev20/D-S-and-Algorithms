/* Purpose: To demonstrate the Big O notation of a function
that sums the character codes of a string */

function sum_char_code_1(n: string): number {
    let sum = 0;
    for (let i = 0; i < n.length; i++) {
        sum += n.charCodeAt(i);
    }
    return sum;
}
/* This algorithm has a time complexity of O(n) because the 
  because for each more character in the string, the time it takes
  to the for loop to complete, increases linearly.
*/

function sum_char_codes_2(n: string): number {
  let sum = 0;
  for (let i = 0; i < n.length; i++) {
      sum += n.charCodeAt(i);
  }

  for (let i = 0; i < n.length; i++) {
    sum += n.charCodeAt(i);
}

  return sum;
}
/*
  The time of this algorith is still 0(n) because Big O notation is not about the
  time that a algorith takes to run (witch is obviously bigger in the second version)
  is about how a algorith scales with the input size. In this case, the time complexity
  and constanst are DROPPED
*/

function sum_char_codes_3(n: string): number {
  let sum = 0;
  for (let i = 0; i < n.length; i++) {
      sum += n.charCodeAt(i);
      if (n.charCodeAt(i) == 69) {
        return sum;
      }
  }
  return sum;
}
/* Big O often refers to the worst case scenario, so the time complexity of this 
is still O(n) cause in the worst scenario, the for loop will run n times */

function sum_char_codes_4(n: string): number {
  let sum = 0;
  for (let i = 0; i < n.length; i++) {
      for(let j = 0; j < n.length; j++) {
        sum += n.charCodeAt(i);
      }
  }
  return sum;
}
/* The time complexity of this algorith is O(n^2) because for each character in the string
the for loop runs n times. */