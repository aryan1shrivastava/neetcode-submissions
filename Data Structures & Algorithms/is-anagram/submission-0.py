class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        temp1 = sorted(s)
        temp2 = sorted(t)

        if temp1 == temp2:
            return True
        return False