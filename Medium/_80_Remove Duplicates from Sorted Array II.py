class Solution(object):
    def removeDuplicates(self, nums):
        n=len(nums)
        k=2

        if(n<2):
            return 1
        for i in range(2,n):
            if(nums[k-2]!=nums[i]):
                nums[k]=nums[i]
                k+=1
        
        return k
        