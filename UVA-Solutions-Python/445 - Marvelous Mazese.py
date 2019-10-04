# 445 - Marvelous Mazese
while True:
		try:
			a = input()
		except EOFError:
			break
		
		num = 0
		for i in range(len(a)):
			if( a[i] == '0' or a[i] == '1' or
				a[i] == '2' or a[i] == '3' or
				a[i] == '4' or a[i] == '5' or
				a[i] == '6' or a[i] == '7' or
				a[i] == '8' or a[i] == '9' ):
					num += ord(a[i])-ord('0')
			elif a[i] == 'b':
				for j in range (num):
					print(' ',end="")
				num = 0
			elif a[i] == '!':
				print("")
			else:
				for j in range(num):
					print(a[i],end="")
				num = 0					
		print()
