# 10300 - Ecological Premium
testCase = int(input())
T = 0
while T<testCase:  # for T in range(testCase):
	T = T+1
	f = int(input())
	t=0
	result = 0
	while t<f:
		t = t+1
		space,animal,friendly = map(int, input().split())
		# print("testCase ",space," ",animal," ",friendly)
		result = result + (space * friendly)
	print(result)
