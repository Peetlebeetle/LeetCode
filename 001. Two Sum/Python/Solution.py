class Solution:
    def twoSum(self, nums, target):
        index = {}

        for i, num in enumerate(nums):
            complement = target - num

            if complement in index:
                return [index[complement], i]
            
            index[num] = i
        
        return []
    
nums = [2, 7, 11, 15]
target = nums[2] + nums[3]
sol = Solution()
res = sol.twoSum(nums, target)
print(f"{res}")
