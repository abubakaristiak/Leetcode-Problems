class Solution(object):
    def maxDiff(self, num):
        s1=list(str(num))
        s2=s1

        for ch in s1:
            if ch!='9':
                s1=['9' if c==ch else c for c in s1]
                break

        for i,ch in enumerate(s2):
            if i==0:
                if ch!='1':
                    s2=['1' if c==ch else c for c in s2]
                    break
            else:
                if ch!='0' and ch!=s2[0]:
                    s2=['0' if c==ch else c for c in s2]
                    break
        
        return int("".join(s1))-int("".join(s2))