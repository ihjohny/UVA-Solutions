# 10071 - Back to High School Physics
while True:
	try:
		v,t = map(int,input().split())
	except EOFError:
		break;
	print(2 * v * t)
