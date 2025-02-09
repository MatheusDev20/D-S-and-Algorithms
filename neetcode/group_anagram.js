/**
 * Verifica se duas strings são anagramas
 * @param {string} s 
 * @param {string} m 
 */
const isAnagram = (s, m) => {
  if (s.length !== m.length) return false;
  const count = {};
  
  for (let char of s) count[char] = (count[char] || 0) + 1;
  for (let char of m) {
    if (!count[char]) return false;
    count[char]--;
  }
  return Object.values(count).every(val => val === 0);
};

/**
 * Agrupa palavras anagramas na lista
 * @param {string[]} anagramList 
 */
const groupAnagram = (anagramList) => {
  if (anagramList.length === 0) return [];

  const [first, ...tail] = anagramList;
  const group = [first];

  // Remove os anagramas de tail e adiciona ao grupo
  const remaining = [];
  for (let word of tail) {
    if (isAnagram(first, word)) {
      group.push(word);
    } else {
      remaining.push(word);
    }
  }

  return [group, ...groupAnagram(remaining)];
};

const result = groupAnagram(["act", "pots", "tops", "cat", "stop", "hat"]);
console.log("Result", result);
