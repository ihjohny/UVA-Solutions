while True:
	try:
		numbers = list(map(int, input().split()))
		dif = [0 for i in range(3009)]
		flag = True
		for i in range(1,numbers[0]):
			a = abs(numbers[i] - numbers[i+1])
			dif[a] = 1
		if(sum(dif[1:numbers[0]]) == numbers[0]-1):
			print("Jolly")
		else:
			print("Not jolly")
	except EOFError:
		break;
