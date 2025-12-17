# Using `unordered_map` in Competitive Programming

## Overview

In C++, the `unordered_map` is part of the Standard Template Library (STL) and provides a **hash table**-based key-value data structure. It allows **fast insertion, deletion, and access** operations, with an average time complexity of **O(1)**.

### Header File

```cpp
#include <unordered_map>
```

### Optional Shortcut

In competitive programming, you often want shorter names to save typing. You can define a macro:

```cpp
#define umap unordered_map
```

Now, instead of writing `unordered_map<int, int> mp;`, you can simply write:

```cpp
umap<int, int> mp;
```

---

## Features

* **Key-value storage** like `map`.
* **No ordering**: unlike `map`, elements are not sorted.
* **Average O(1) operations** for insert, find, and erase (constant time).
* **Supports any hashable key type** (int, string, pair, etc.).
* **Efficient for large datasets** where order doesn't matter.

---

## Basic Syntax

```cpp
#include <bits/stdc++.h>
using namespace std;

#define umap unordered_map

int main() {
    umap<int, string> mp; // map int to string
    
    // Insertion
    mp[1] = "Hello";
    mp[2] = "World";
    
    // Access
    cout << mp[1] << endl;  // Output: Hello
    
    // Check existence
    if (mp.find(2) != mp.end()) {
        cout << "Key 2 exists" << endl;
    }
    
    // Iteration
    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    // Erase a key
    mp.erase(1);
    
    return 0;
}
```

---

## Tips for Competitive Programming

1. **Use `#include <bits/stdc++.h>`** to include all standard headers quickly.
2. **Define shortcuts** for speed:

   ```cpp
   #define umap unordered_map
   ```
3. **Avoid using large keys as complex objects** (like vectors) unless you provide a custom hash function.
4. **Beware of collisions**: in worst-case scenarios, operations may degrade to O(n). For random input, this is extremely rare.
5. **Use `.find()` to check existence** instead of accessing with `[]` if you don’t want to insert a default value.
6. **Use `count(key)` for boolean existence**:

   ```cpp
   if (mp.count(3)) { /* key exists */ }
   ```
7. **Use `emplace()` for in-place insertion**:

   ```cpp
   mp.emplace(4, "Hello");
   ```

   It avoids unnecessary copying.
8. **Use `unordered_map` over `map`** when order doesn’t matter to save time.

---

## Example: Frequency Counter

```cpp
#include <bits/stdc++.h>
using namespace std;

#define umap unordered_map

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
    umap<int, int> freq;
    
    for (int x : arr) {
        freq[x]++;
    }
    
    for (auto &p : freq) {
        cout << p.first << " appears " << p.second << " times\n";
    }
    
    return 0;
}
```

**Output:**

```
1 appears 1 times
2 appears 2 times
3 appears 3 times
4 appears 1 times
```

---

## Summary

* `unordered_map` = fast key-value storage.
* Use `#define umap unordered_map` to save typing.
* Ideal for frequency counting, storing positions, memoization, etc.
* Average O(1) time complexity; use when order is not important.



# Using `unordered_set` in Competitive Programming

## Overview

In C++, the `unordered_set` is part of the Standard Template Library (STL). It is a **hash table–based container** that stores **unique elements only** and allows **fast insertion, deletion, and lookup** with an average time complexity of **O(1)**.

It is extremely useful in competitive programming when you only care about **existence** of elements and **order does not matter**.

---

## Header File

```cpp
#include <unordered_set>
```

### Optional Shortcut (Macro)

To save typing time in contests, you can define:

```cpp
#define uset unordered_set
```

Now instead of writing:

```cpp
unordered_set<int> s;
```

You can write:

```cpp
uset<int> s;
```

---

## Features

* Stores **only unique elements** (no duplicates).
* **No ordering** of elements.
* Average **O(1)** time complexity for:

  * `insert()`
  * `find()`
  * `erase()`
* Faster than `set` when ordering is not required.
* Ideal for membership checking.

---

## Basic Syntax

```cpp
#include <bits/stdc++.h>
using namespace std;

#define uset unordered_set

int main() {
    uset<int> s;

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // Duplicate insert (ignored)
    s.insert(20);

    // Check existence
    if (s.find(20) != s.end()) {
        cout << "20 exists" << endl;
    }

    // Another way to check existence
    if (s.count(10)) {
        cout << "10 exists" << endl;
    }

    // Iterate through set
    for (int x : s) {
        cout << x << " ";
    }

    // Erase an element
    s.erase(20);

    return 0;
}
```

---

## Common Use Cases in Competitive Programming

### 1. Checking Duplicates

```cpp
uset<int> s;
for (int x : arr) {
    if (s.count(x)) {
        cout << "Duplicate found";
        break;
    }
    s.insert(x);
}
```

---

### 2. Fast Membership Testing

```cpp
uset<string> dict;
dict.insert("apple");
dict.insert("banana");

if (dict.count("apple")) {
    cout << "Found";
}
```

---

### 3. Removing Duplicates from an Array

```cpp
vector<int> v = {1, 2, 2, 3, 3, 4};
uset<int> s(v.begin(), v.end());

for (int x : s) {
    cout << x << " ";
}
```

---

## Tips for Competitive Programming

1. Use `unordered_set` instead of `set` when **ordering is not required**.
2. Prefer `count(x)` for existence checks (clean and readable).
3. Avoid using very complex objects as keys unless necessary.
4. Worst-case time complexity can degrade to **O(n)** due to hash collisions, but this is rare in practice.
5. Combine with `unordered_map` for powerful hash-based solutions.

---

## `unordered_set` vs `set`

| Feature         | unordered_set | set            |
| --------------- | ------------- | -------------- |
| Order           | No            | Yes (sorted)   |
| Time Complexity | O(1) avg      | O(log n)       |
| Implementation  | Hash table    | Red-black tree |
| Use Case        | Fast lookup   | Ordered data   |

---

## Summary

* `unordered_set` stores **unique elements only**.
* Use `#define uset unordered_set` for faster coding.
* Best choice for **fast existence checks**.
* Average **O(1)** performance makes it ideal for contests.

---

Happy Coding 🚀

# Hash Map & Hash Set Patterns in Competitive Programming

This README explains **common problem patterns**, **when to use `unordered_map (umap)`**, **`unordered_set (uset)`**, **frequency tables**, and **important tricks** used in competitive programming.

---

## Quick Decision Guide

| Problem Requirement    | Use                             |
| ---------------------- | ------------------------------- |
| Count occurrences      | `unordered_map` (frequency)     |
| Check existence        | `unordered_set`                 |
| Map key → value        | `unordered_map`                 |
| Remove duplicates      | `unordered_set`                 |
| Fast lookup (no order) | `unordered_map / unordered_set` |

---

## 1. Frequency Counting Pattern 🔢

### When to Use

* Count numbers, characters, strings
* Most frequent / least frequent element
* Anagrams
* Histogram problems

### Pattern

```cpp
unordered_map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}
```

### Example: Most Frequent Element

```cpp
int ans, mx = 0;
for (auto &p : freq) {
    if (p.second > mx) {
        mx = p.second;
        ans = p.first;
    }
}
```

---

## 2. Existence / Lookup Pattern ✅

### When to Use

* Does element exist?
* Has this state been visited?
* Fast membership testing

### Pattern (`unordered_set`)

```cpp
unordered_set<int> seen;
for (int x : arr) {
    if (seen.count(x)) {
        // already exists
    }
    seen.insert(x);
}
```

### Example: Detect Duplicate

```cpp
for (int x : arr) {
    if (seen.count(x)) {
        cout << "Duplicate found";
        break;
    }
    seen.insert(x);
}
```

---

## 3. Two Sum / Pair Sum Pattern 🎯

### When to Use

* Find two numbers with a given sum
* Complement checking

### Pattern

```cpp
unordered_set<int> s;
for (int x : arr) {
    if (s.count(target - x)) {
        cout << "Pair found";
        break;
    }
    s.insert(x);
}
```

⏱ Time Complexity: **O(n)**

---

## 4. Prefix Sum + Hash Map Pattern 📈

### When to Use

* Subarray sum equals K
* Count subarrays with given sum

### Pattern

```cpp
unordered_map<int, int> mp;
mp[0] = 1;
int sum = 0, ans = 0;

for (int x : arr) {
    sum += x;
    ans += mp[sum - k];
    mp[sum]++;
}
```

🔥 Very common in contests

---

## 5. Anagram / Character Count Pattern 🔤

### When to Use

* Check if two strings are anagrams
* Group anagrams

### Pattern

```cpp
unordered_map<char, int> freq;
for (char c : s) freq[c]++;
for (char c : t) freq[c]--;

for (auto &p : freq) {
    if (p.second != 0) return false;
}
return true;
```

---

## 6. Index Tracking Pattern 📍

### When to Use

* First occurrence
* Last occurrence
* Distance problems

### Pattern

```cpp
unordered_map<int, int> lastIndex;
for (int i = 0; i < n; i++) {
    lastIndex[arr[i]] = i;
}
```

---

## 7. Graph / BFS Visited Pattern 🌐

### When to Use

* BFS / DFS
* Avoid revisiting nodes

### Pattern

```cpp
unordered_set<int> visited;
queue<int> q;

q.push(start);
visited.insert(start);

while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
        if (!visited.count(v)) {
            visited.insert(v);
            q.push(v);
        }
    }
}
```

---

## 8. Coordinate Compression / Mapping Pattern 🗺️

### When to Use

* Large values
* Mapping values to small indices

```cpp
unordered_map<int, int> mp;
int id = 0;
for (int x : arr) {
    if (!mp.count(x)) mp[x] = id++;
}
```

---

## Important Tricks & Best Practices ⚡

### 1. Avoid Accidental Insertions

❌ Bad:

```cpp
if (mp[x]) {}
```

✅ Good:

```cpp
if (mp.count(x)) {}
```

---

### 2. Reserve Space (Performance Boost)

```cpp
unordered_map<int, int> mp;
mp.reserve(1e6);
```

---

### 3. Use `find()` for Safety

```cpp
auto it = mp.find(x);
if (it != mp.end()) {
    cout << it->second;
}
```

---

### 4. Prefer Hash Containers When Order Is Irrelevant

* Faster than `map` / `set`
* Average **O(1)**

---

## Common Mistakes ❌

* Using `unordered_map` when ordering is required
* Using `[]` just to check existence
* Forgetting that duplicates are ignored in `unordered_set`

---

## Summary 🧠

* `unordered_map` → **counting, mapping, indexing**
* `unordered_set` → **existence, visited, duplicates**
* Frequency tables solve **50%+ of CP problems**
* Master these patterns = huge performance gain

---

Happy Competitive Programming 🚀
1. Row Pattern Recognition

Each row has a binary pattern of clean/dirty squares.

Flipping a column affects multiple rows simultaneously.

Observation: Two rows can be made completely clean if their patterns are identical up to some column flips.