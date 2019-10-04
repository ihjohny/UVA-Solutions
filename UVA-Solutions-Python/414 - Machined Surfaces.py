# 414 - Machined Surfaces
while True:
	n = int(input())
	l = []
	if n==0:
		break
	minSpace = 25
	result =0
	for i in range (n):
		c = input()
		a=c.count(' ')
		if(a< minSpace):
			minSpace = a
		l.append(a)
	
	for j in l:
		result+=j-minSpace
	print(result)
