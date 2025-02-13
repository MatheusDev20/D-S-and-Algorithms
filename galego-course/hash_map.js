class HashMap {
  constructor(size = 16) {
    this.size = size;
    this.buckets = new Array(size).fill(null).map(() => []);
  }

  _hash(key) {
    let hash = 0;
    const prime = 31;
    for (let i = 0; i < key.length; i++) {
      hash = (prime * hash + key.charCodeAt(i)) % this.size;
    }
    return hash;
  }

  set(key, value) {
    const index = this._hash(key);
    const bucket = this.buckets[index];

    for (let pair of bucket) {
      if (pair[0] === key) {
        pair[1] = value;
        return;
      }
    }

    bucket.push([key, value]);
  }

  // Retrieve a value by key
  get(key) {
    const index = this._hash(key);
    const bucket = this.buckets[index];

    for (let pair of bucket) {
      if (pair[0] === key) {
        return pair[1];
      }
    }
    return undefined; // Key not found
  }

  // Remove a key-value pair
  delete(key) {
    const index = this._hash(key);
    const bucket = this.buckets[index];

    for (let i = 0; i < bucket.length; i++) {
      if (bucket[i][0] === key) {
        bucket.splice(i, 1);
        return true; // Successfully deleted
      }
    }
    return false; // Key not found
  }

  // Check if a key exists
  has(key) {
    return this.get(key) !== undefined;
  }

  // Display the entire hash map
  display() {
    this.buckets.forEach((bucket, index) => {
      if (bucket.length > 0) {
        console.log(`Bucket ${index}:`, bucket);
      }
    });
  }
}

// Example usage:
const map = new HashMap();
map.set("name", "Alice");
map.set("age", 25);
map.set("job", "Engineer");
map.set("name", "Bob"); // Update "name"

console.log(map.get("name")); // Bob
console.log(map.get("age"));  // 25
console.log(map.has("job"));  // true

map.delete("age");
console.log(map.get("age"));  // undefined

map.display();
