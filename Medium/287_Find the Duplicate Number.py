from typing import List

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        st=set()
        for i in nums:
            if i in st:
                return i
            st.add(i)
        return -1

