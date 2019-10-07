testCase = int(input())
for i in range(testCase):
	a = int(input())
	b = int(input())
	if a%2 == 0:
		a = a+1
	if b%2 == 0:
		b = b-1
	n = ((b-a)/2)+1
	ans = (n/2)*(a+b)
	print('Case ',(i+1),': ',int(ans),sep="")
