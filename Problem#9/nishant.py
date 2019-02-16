class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num = x
        if num < 0:
            return False
        rev  = 0
        
        while(x):
            r = x % 10
            rev = rev*10 + r
            x = x /10
            
        if num == rev:
            return True
        return False
            
        