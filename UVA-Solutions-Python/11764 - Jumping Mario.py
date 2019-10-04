# 11764 - Jumping Mario


testCase = int(input())
for i in range(1,testCase + 1):
	n = int(input())
	walls = list ( map ( int,input().split() ) )
	up = 0
	down = 0
	for j in range( len(walls) - 1):
		if ( walls[j] < walls[j + 1]):
			up = up + 1
		elif ( walls[j] > walls[j + 1]):
			down = down + 1
	
	print("Case ",i,": ",up," ",down,sep="")
