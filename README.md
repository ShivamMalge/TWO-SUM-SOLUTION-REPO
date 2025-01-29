# Two Sum Problem

## Problem Statement
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Solution Approach
The optimal approach to solve this problem is by using a **hash map (dictionary)** to store the numbers and their corresponding indices. This allows us to achieve an **O(n) time complexity** with **constant-time lookups**.

## Code Implementations

### Python
```python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_indices = {}
        
        for i, num in enumerate(nums):  
            complement = target - num  
            
            if complement in num_indices:  
                return [num_indices[complement], i]  
            
            num_indices[num] = i  
        
        return []  
```

### C
```c
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    int *result = (int *)malloc(2 * sizeof(int));

    int hashMap[10000] = {0};

    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];

        if (hashMap[complement] != 0)
        {
            result[0] = hashMap[complement] - 1;
            result[1] = i;
            return result;
        }

        hashMap[nums[i]] = i + 1;
    }

    *returnSize = 0;
    return NULL;
}

```

### C++
```cpp
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_indices;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (num_indices.find(complement) != num_indices.end()) {
                return {num_indices[complement], i};
            }
            
            num_indices[nums[i]] = i;
        }
        return {};
    }
};
```

### JavaScript
```javascript
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let numIndices = new Map();

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];

        if (numIndices.has(complement)) {
            return [numIndices.get(complement), i];
        }

        numIndices.set(nums[i], i);
    }

    return [];
};
```

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

## Complexity Analysis
- **Time Complexity:** `O(n)`, since we traverse the list once and each lookup in the dictionary is `O(1)`.
- **Space Complexity:** `O(n)`, since we store up to `n` elements in the dictionary in the worst case.

## Edge Cases Considered
- Negative numbers and zero.
- Large arrays with unique and duplicate values.
- Cases where the target sum involves the same number appearing twice.

---

This implementation ensures an efficient and optimized solution to the **Two Sum** problem. 🚀

