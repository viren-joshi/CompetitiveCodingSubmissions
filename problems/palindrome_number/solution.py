class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        if x==0:
            return True
        s = str(x)
        l = len(s)
        for i in range(l/2):
            if s[i]!=s[l-i-1]:
                return False
        return True