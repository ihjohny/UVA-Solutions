# 374 - Big Mod

def bigMod(b,p,m):
	if p == 0:
		return 1
	if p % 2 == 0:
		res = bigMod(b, int(p/2), m)
		return ((res%m) * (res%m) %m)
	else:
		return ((b%m) * (bigMod(b,p-1,m)) %m)
	
while True:
	try:
		b = input()
		if b == "":
			b = int(input())
		else:
			b = int(b)
		
		p = int(input())
		m = int(input())
	except EOFError:
		break;
	print(bigMod(b,p,m))
	
	
