from typing import List
class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        nums.sort()
        res=[]
        n=len(nums)
        for i in range(0,n,3):
            if i+2>=n or nums[i+2]-nums[i]>k:
                return []
            res.append([nums[i], nums[i+1], nums[i+2]])
        
        return res
