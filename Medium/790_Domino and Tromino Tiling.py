class Solution(object):
    def __init__(self):
        self.M=1000000007
        self.t=[-1]*1001
    
    def solve(self, n):
        if n==1 or n==2:
            return n
        if self.t[n]!=-1:
            return self.t[n]
        if n==3:
            return 5
        
        self.t[n]=(2 * self.solve(n-1)%self.M + self.solve(n-3)%self.M)%self.M
        return self.t[n]


    def numTilings(self, n):
        return self.solve(n)

        
        
        