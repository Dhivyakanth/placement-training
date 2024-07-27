class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        a=nums 
        if value in nums :
            return nums.index(value)
        else :
            a.append(value)
            a.sort()
            return a.index(value)
