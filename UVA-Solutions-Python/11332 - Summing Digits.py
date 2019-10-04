# 11332 - Summing Digits
def function(a):
	res = 0
	while a > 9:
		res = res + (a % 10)
		a = int (a / 10)
	res = res + a
	return res

while True:
	a = int(input())
	if( a == 0 ):
		break
	res = function(a)
	
	while(res > 9):
		res = function(res)
	print(res)
		
