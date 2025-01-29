# Two Sum Problem

## Example Walkthrough

Let's consider the following input:
``C
nums = [2, 7, 11, 15]
target = 9
```

| i  | num  | complement (target - num) | num_indices (array)     | Action |
|----|------|--------------------------|-------------------------|--------|
| 0  | 2    | 9 - 2 = **7**             | `{0: 2}`                 | Store 2 in the array at index `nums[0]` |
| 1  | 7    | 9 - 7 = **2**             | `{0: 2}` (found!)        | Return `[0,1]` (found complement) |

✔ **Output:** `[0,1]` (since `nums[0] + nums[1] = 2 + 7 = 9`)

**Explanation for C**: We use an array (size 10000) to simulate the behavior of a hash map. The number is stored at its index  in the array, and we check if the complement exists.


