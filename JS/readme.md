# Two Sum Problem

## Example Walkthrough

Let's consider the following input:
```JavaScript
nums = [2, 7, 11, 15]
target = 9
```

| i  | num  | complement (target - num) | num_indices (Map)         | Action |
|----|------|--------------------------|---------------------------|--------|
| 0  | 2    | 9 - 2 = **7**             | `Map { 2 => 0 }`           | Store 2 in the `Map` |
| 1  | 7    | 9 - 7 = **2**             | `Map { 2 => 0 }` (found!)  | Return `[0,1]` (found complement) |

✔ **Output:** `[0,1]` (since `nums[0] + nums[1] = 2 + 7 = 9`)

**Explanation for JavaScript**: We use the `Map` to store the number and its index. When the complement is found, we return the indices.

