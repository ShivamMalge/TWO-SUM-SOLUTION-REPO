#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndices;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numIndices.find(complement) != numIndices.end()) {
                return {numIndices[complement], i};
            }

            numIndices[nums[i]] = i;
        }

        return {};
    }
};

/*
Explanation:
1. We initialize an empty unordered_map to store numbers and their indices.
2. We iterate through the vector and calculate the complement (target - num).
3. If the complement exists in the unordered_map, we return the indices of the two numbers.
4. Otherwise, we store the current number along with its index in the unordered_map.

This approach ensures an optimal O(n) time complexity using a single pass and O(n) space complexity.
*/
