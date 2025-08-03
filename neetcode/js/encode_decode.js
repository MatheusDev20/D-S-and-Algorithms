class Solution {
  /**
   * @param {string[]} strs
   * @returns {string}
   */

  encode(strs) {
    let result = ""
    for (const str of strs) {
      result += str.length + "#" + str
    }
    return result
  }

  /**
   * @param {string} str
   * @returns {string[]}
   */
  decode(str) {
    let result = [];
    let i = 0;

    while (i < str.length) {
      let j = i;
      while (str[j] !== "#") j++;

      let length = parseInt(str.substring(i, j));
      let word = str.substring(j + 1, j + 1 + length);

      result.push(word);
      i = j + 1 + length;
    }

    return result;
  }
}
