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

/*
Explanation:
1. We initialize an empty Map to store numbers and their indices.
2. We iterate through the array and calculate the complement (target - num).
3. If the complement exists in the Map, we return the indices of the two numbers.
4. Otherwise, we store the current number along with its index in the Map.

This approach ensures an optimal O(n) time complexity using a single pass and O(n) space complexity.
*/
