# Two Sum Problem

## Example Walkthrough

Let's consider the following input:
```python
nums = [2, 7, 11, 15]
target = 9
```

| i  | num  | complement (target - num) | num_indices (dictionary) | Action |
|----|------|--------------------------|-------------------------|--------|
| 0  | 2    | 9 - 2 = **7**            | `{2: 0}`                | Store 2 in hash map |
| 1  | 7    | 9 - 7 = **2**            | `{2: 0}` (found!)       | Return `[0,1]` |

✔ **Output:** `[0,1]` (since `nums[0] + nums[1] = 2 + 7 = 9`)

