class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d = dict()
        N = len(s)
        
        for i in range(0, N):            
            if s[i] not in d :
                if t[i] in d.values() : return False
                else : d[s[i]] = t[i]
            elif s[i] in d:
                if d[s[i]] == t[i] : continue
                else :return False
        return True
