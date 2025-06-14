class Solution(object):
    def minMaxDifference(self, num):
        s=str(num)

        mx=s
        for ch in s:
            if ch!='9':
                mx=s.replace(ch,'9')
                break

        mn=s
        for ch in s:
            if ch!=0:
                mn=s.replace(ch, '0')
                break
        
        return int(mx)-int(mn)