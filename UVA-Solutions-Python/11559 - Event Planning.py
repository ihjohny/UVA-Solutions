# 11559 - Event Planning

while True:
	try:
		n,b,h,w = map(int, input().split())
	except EOFError:
		break;
	result = 99999999
	for i in range(h):
		price = int(input())
		l = list(map(int,input().split()))
		for sit in l:
			if(sit>=n):
				result=min(price*n,result)
				continue
			
	if(result==99999999 or result>b):
		print("stay home")
	else:
		print(result)
		
		
