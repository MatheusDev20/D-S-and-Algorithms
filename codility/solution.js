// Input A = [1,3,6,4,1,2]

const minThatNoAppear = (list) => {
  let max = list[0]
  for(let i = 1; i<list.length; i++) {
    if(max < list[i]) max = list[i] 
    else return max
  }

  return max
} 

const max = minThatNoAppear([1,3,6,4,1,2]) 
console.log("Max", max)