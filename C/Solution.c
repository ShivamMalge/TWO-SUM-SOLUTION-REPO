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

/*
Explanation:
1. We start by setting *returnSize = 2 because we are always returning two indices.
2. We create a hashMap (an array here) to store the numbers and their indices. It's big enough to store all possible numbers.
3. We loop through the nums array, calculating the complement (target - current number).
4. For each number, we check if its complement is already in the hashMap. If yes, we found our pair and return their indices.
5. If the complement doesn't exist, we store the current number's index in the hashMap (adjusted for 1-based indexing).
6. If no solution is found after looping through the array, we return NULL and set *returnSize = 0.

Time Complexity: O(n) because we only traverse the array once.
Space Complexity: O(n) due to the hashMap storing numbers and their indices.
*/
