class Solution(object):
    def maxAdjacentDistance(self, nums):
        n=len(nums)

        mxDif=0
        for i in range(n):
            j=(i+1)%n
            mxDif=max(mxDif, abs(nums[i]-nums[j]))
        
        return mxDif

        