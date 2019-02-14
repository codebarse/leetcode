class palindrome:
	def check_if_palindrome(self,str):
		length = len(str)
			for i in range(length//2):
				if str[i] != str[length-1-i]:
					return False
		return True
        
        

#driver program: Entry Point
if __name__=='__main__':
    print(palindrome().check_if_palindrome("12344321"))
    print(palindrome().check_if_palindrome("1"))
    print(palindrome().check_if_palindrome("123"))
    print(palindrome().check_if_palindrome("121"))
    print(palindrome().check_if_palindrome("neoioen"))
