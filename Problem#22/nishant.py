class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ans = []
        
        def dfs(s,left,right):
        
            if left==0 and right==0:
                print(s)
                ans.append(s)
                return
                
                
            else:
                if left>0:
                    dfs(s+"(", left-1,right)
                if right>left:
                    dfs(s+")",left,right-1)
        
        dfs("",n,n)
        return ans