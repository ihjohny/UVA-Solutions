# 10127 - Ones
while True:
	try:
		n = int(input())
	except EOFError:
		break;
	k = 1
	res = 1 
	while res % n != 0:
		res = ((res*10) + 1) % n
		k = k + 1
	print(k)
	
