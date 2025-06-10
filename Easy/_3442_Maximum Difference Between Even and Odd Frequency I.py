class Solution(object):
    def maxDifference(self, s):
        n=len(s)
        from collections import Counter
        mp=Counter(s)

        mnEven=float('inf')
        mxOdd=0
        for ch, freq in mp.items():
            if freq%2==0:
                mnEven=min(mnEven, freq)
            else:
                mxOdd=max(mxOdd, freq)
        
        if mnEven==float('inf'):
            mnEven=0
        
        return mxOdd-mnEven