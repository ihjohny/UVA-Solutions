# 488 - Triangle Wave
n = int(input())
for t in range(n):
	input()
	amplitude = int(input())
	frequency = int(input())
	for i in range(frequency):
		for j in range(1,amplitude+1):
			for k in range(j):
				print(j, end = "")
			print()
		for j in range(amplitude-1,0,-1):
			for k in range(j):
				print(j, end = "")
			print()
		if(i!=frequency-1):
			print()
	if(t!=n-1):
		print()


