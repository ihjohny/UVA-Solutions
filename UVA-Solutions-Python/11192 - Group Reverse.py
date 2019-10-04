# 11192 - Group Reverse
while True:
	n = input()
	if(n == '0'):
		break
	g, s = n.split(maxsplit=1)
	x = len(s)
	g = x // int(g)	
	for i in range(g-1, len(s), g):
		for j in range(g):
			print(s[i-j], end = "")
	print()
