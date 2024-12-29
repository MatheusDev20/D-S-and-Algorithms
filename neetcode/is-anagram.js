/**
 * 
 * @param {string} s 
 * @param {string} m 
 */

const isAnagram = (s, m) => {
  if (s.length !== m.length) return false
  const countS = {}
  const countM = {}

  for (let i = 0; i < s.length; i++) {
    countS[s[i]] = (countS[s[i]] || 0) + 1;
    countM[m[i]] = (countM[m[i]] || 0) + 1;
  }
  console.log("Counts", countM)
  console.log("CountS", countS)

  for(const k in countS) if(countS[k] !== countM[k]) return false
  return true
}


// "racecar", t = "carrace"