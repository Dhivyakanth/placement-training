class Solution:
    def lengthOfLastWord(self, s):
        a=s.split()
        return len(a[-1])
