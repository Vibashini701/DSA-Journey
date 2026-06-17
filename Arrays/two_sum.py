"""
Problem: Two Sum
Description: Given an array of integers nums and an integer target, 
return the indices of the two numbers that add up to target.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9, so we return [0, 1].
"""

def twoSum(nums, target):
    """
    Solve using a hash map for O(n) time complexity
    """
    # Write your solution here
    pass


# Test cases
if __name__ == "__main__":
    # Test case 1
    nums = [2, 7, 11, 15]
    target = 9
    print(twoSum(nums, target))  # Expected: [0, 1]
    
    # Test case 2
    nums = [3, 2, 4]
    target = 6
    print(twoSum(nums, target))  # Expected: [1, 2]
