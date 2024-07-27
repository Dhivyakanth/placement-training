class Solution:
    def plusOne(self, digits):
        
        a = int("".join([str(i) for i in digits]))+1

        return [ int(i) for i in str(a)]
