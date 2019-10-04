# 10107 What is the Median?

num = [0]
n = 1
while (True):
	try:
		i = int(input())
		num.append(i)
	except EOFError:
		break;
	num.sort()
	if(n == 1):
		print(num[n])
	elif(n % 2 == 1):
		print(int(num[int(n/2)+1]))
	else:
		print(int((num[int(n/2)] + num[int(n/2)+1])/2))
	n = n + 1
