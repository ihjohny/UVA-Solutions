# 457 - Linear Cellular Automata

Case = int(input())
for t in range(Case):
	input()
	DNA = list(map(int, input().split()))
	level = [0]*42
	level[20] = 1
	nextLevel = list(level)
	s = {0: ' ', 1: '.', 2: 'x', 3: 'W'}
	for day in range(50):
		print (''.join([s[i] for i in level]),end="")
		for i in range(1,41):
			ss = level[i-1] + level[i] + level[i+1]
			nextLevel[i] = DNA[ss]
		level, nextLevel = nextLevel, level
		print()
	if(t != Case-1):
		print()
