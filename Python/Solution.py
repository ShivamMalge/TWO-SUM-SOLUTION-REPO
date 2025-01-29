class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_indices = {}
        
        for i, num in enumerate(nums):  
            complement = target - num  
            
            if complement in num_indices:  
                return [num_indices[complement], i]  
            
            num_indices[num] = i  
        
        return []  

        """
        Explanation:
        1. We initialize an empty dictionary (hash map) to store numbers and their indices.
        2. We iterate through the list and calculate the complement (target - num).
        3. If the complement exists in the dictionary, we return the indices of the two numbers.
        4. Otherwise, we store the current number along with its index in the dictionary.
        
        This approach ensures an optimal O(n) time complexity using a single pass and O(n) space complexity.
        """
