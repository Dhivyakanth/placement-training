9) PROGRAM: PALINDROME A NUMBER
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        y = 0
        z = x
        
        while z != 0:
            digit = z % 10
            y = y * 10 + digit
            z //= 10

        return y == x
========================================================================================
