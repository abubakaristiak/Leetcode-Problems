from typing import List
class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums=[n for n in nums if n>0]
        nums.sort()

        tar=1
        for n in nums:
            if n==tar:
                tar+=1
            elif n>tar:
                return tar
            
        return tar