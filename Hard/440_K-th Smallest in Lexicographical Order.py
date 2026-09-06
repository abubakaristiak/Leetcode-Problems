class Solution(object):
    def findKthNumber(self, n, k):
        def cnt_steps(n1,n2):
            steps=0
            while n1<=n:
                steps+=min(n+1,n2)-n1
                n1*=10
                n2*=10
            return steps
        curr=1
        k-=1
        while k>0:
            steps=cnt_steps(curr, curr+1)
            if steps<=k:
                k-=steps
                curr+=1
            else:
                k-=1
                curr*=10
        return curr
        