class Solution(object):
    def maximumDifference(self, nums):
        n=len(nums)
        mxDif=-1
        for i in range(n):
            for j in range(i+1, n):
                if nums[i]<nums[j]:
                    cur=nums[j]-nums[i]
                    mxDif=max(mxDif, cur)
                    
        return mxDif

        