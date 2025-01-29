# Two Sum Problem

## Example Walkthrough

Let's consider the following input:
```C++
nums = [2, 7, 11, 15]
target = 9
```

| i  | num  | complement (target - num) | num_indices (unordered_map) | Action |
|----|------|--------------------------|----------------------------|--------|
| 0  | 2    | 9 - 2 = **7**             | `{2: 0}`                    | Store 2 in the `unordered_map` |
| 1  | 7    | 9 - 7 = **2**             | `{2: 0}` (found!)           | Return `[0,1]` (found complement) |

✔ **Output:** `[0,1]` (since `nums[0] + nums[1] = 2 + 7 = 9`)

**Explanation for C++**: We use an `unordered_map` to store the number and its index. When we find the complement in the map, we return the indices.

