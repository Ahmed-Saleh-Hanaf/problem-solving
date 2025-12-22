# 📊 Range Queries 

This README is a **practical reference** for all important **range query techniques**

---

## 🧠 What is a Range Query?

A range query asks for information about a subarray or subrange `[L, R]`.

Examples:

* Sum of elements
* Minimum / Maximum
* GCD / XOR
* Frequency of a value
* Number of distinct elements
* Updates + queries

---

## 🧭 Technique Selection Guide

| Problem Type                 | Best Technique     |
| ---------------------------- | ------------------ |
| Static array, sum queries    | Prefix Sum         |
| Static array, min/max/gcd    | Sparse Table       |
| Dynamic updates, sum         | Fenwick Tree (BIT) |
| Dynamic updates, complex ops | Segment Tree       |
| Range updates + queries      | Lazy Segment Tree  |
| Offline frequency queries    | Mo’s Algorithm     |
| Sorted data queries          | Binary Search      |
| 2D grid queries              | 2D Prefix Sum      |

---

## 1️⃣ Prefix or Sufix

### Use When

* Array is static
* Query is reversible (sum, xor, count, (min/max from begining or last))

### Build work on 0 base

```cpp
vector<int> px(n);
px[0] = a[0];

// prefix sum
for (int i = 1; i < n; i++)
    px[i] = px[i-1] + a[i];


// prefix xor
for (int i = 1; i < n; i++)
    px[i] = px[i-1] ^ a[i];

```

### Query work on 0 base

```cpp
sum(L, R) = p[R] - (L ? p[L-1] : 0);
```

### Complexity

* Build: `O(n)`
* Query: `O(1)`

### Variants

| Query           | Trick        |
| --------------- | ------------ |
| Range sum       | Prefix Sum   |
| Range XOR       | Prefix XOR   |
| Range frequency | Prefix Count |

---

## 2️⃣ Difference Array (Range Update)

### Use When

* Many range updates
* Few final queries

```cpp
diff[l] += x;
diff[r+1] -= x;
```

Rebuild array using prefix sum on `diff`.

---

## 3️⃣ Binary Search on Ranges

### Use When

* Array is sorted
* Query: count elements in range

```cpp
count = upper_bound(a.begin(), a.end(), R)
      - lower_bound(a.begin(), a.end(), L);
```

---

## 4️⃣ Sparse Table (RMQ)

### Use When

* Static array
* Queries: min / max / gcd
* No updates

### Build

```cpp
st[i][j] = min(st[i][j-1], st[i + (1<<(j-1))][j-1]);
```

### Query

```cpp
k = log2(R - L + 1);
ans = min(st[L][k], st[R - (1<<k) + 1][k]);
```

### Complexity

* Build: `O(n log n)`
* Query: `O(1)`

---

## 5️⃣ Fenwick Tree (Binary Indexed Tree)

### Use When

* Point updates
* Prefix / range sum queries

### Complexity

| Operation | Time       |
| --------- | ---------- |
| Update    | `O(log n)` |
| Query     | `O(log n)` |

Range Query:

```cpp
sum(R) - sum(L-1)
```

---

## 6️⃣ Segment Tree

### Use When

* Range queries + updates
* Complex operations (min, max, sum, gcd)

### Complexity

| Operation | Time       |
| --------- | ---------- |
| Build     | `O(n)`     |
| Query     | `O(log n)` |
| Update    | `O(log n)` |

### Lazy Propagation

Used for **range updates** with **range queries**.

---

## 7️⃣ Mo’s Algorithm (Offline Queries)

### Use When

* Static array
* Many queries
* Frequency / distinct count problems

### Complexity

```
O((N + Q) √N)
```

---

## 8️⃣ Range Frequency Queries

### Problem

Count occurrences of value `x` in `[L, R]`

### Solution

```cpp
map<int, vector<int>> pos;
count = upper_bound(pos[x].begin(), pos[x].end(), R)
      - lower_bound(pos[x].begin(), pos[x].end(), L);
```

---

## 9️⃣ Range Queries on Pairs

```cpp
vector<pair<int,int>> v;
sort(v.begin(), v.end());
```

Binary search works **lexicographically** (`first`, then `second`).

---

## 🔟 2D Range Queries

### 2D Prefix Build

```cpp
pref[i][j] = a[i][j]
           + pref[i-1][j]
           + pref[i][j-1]
           - pref[i-1][j-1];
```

### Query Rectangle

```cpp
sum = pref[x2][y2]
    - pref[x1-1][y2]
    - pref[x2][y1-1]
    + pref[x1-1][y1-1];
```

---


📌 **Author**: Ahmed Saleh Hanafi





Infinite Repeated Array Works for sum, frequency, XOR, etc.
You have:

An array A of length n

Its prefix sum P

The array is repeated infinitely:
A A A A A ...

Queries ask for the sum from index l to r (1-based or 0-based, same idea)
Key Idea 🧠

When the array repeats infinitely, any range [l, r] can be split into:

Full copies of the array

Partial prefix at the start

Partial prefix at the end

So we reduce the infinite problem to prefix sums of one array.
This pattern appears a lot in:

Infinite arrays

Circular arrays

Prefix sum + modulo
Pattern Recognition (Important)

You just implemented this powerful pattern:

Infinite array + prefix
Replace sum → frequency
Same math, same formula

This works for:

sum

frequency

count of values

count of characters
1- ll sum_to (ll x, vc<ll>& p)
{
    if (x<0) return 0;
    ll n = sz(p);
    ll t = p[n-1];
    return (x/n)*t + p[x%n];
}
2-  range_sum(l, r) = f(r) - f(l - 1)
# update range
 1-define array vc<ll> f(sz(a));
 2- f[l]+= val; if(r+1< sz(a)) f[r+1]-= val;





Variations

Sum of numbers → pref[i] = prefix sum

Count of a number → pref[i] = frequency

XOR / parity → pref[i] = prefix XOR

Circular array → use index % n without infinite repetition

Repeated k times only → clamp r to k*n - 1

Common Mistakes

Forgetting 0-based indexing

Passing vectors by value in C++ → use const &

Forgetting to handle x < 0

Confusing inclusive/exclusive ranges

Example
A = [1,2,3], infinite
Query: l = 2, r = 8
0-based: array = [1,2,3,1,2,3,1,2,3,...]
Answer = 2+3+1+2+3+1+2 = 14


---

