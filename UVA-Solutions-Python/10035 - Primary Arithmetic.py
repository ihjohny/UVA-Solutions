# 10035 - Primary Arithmetic

while True:
	a, b = map(str, input().split())
	if (a[0] == '0' and b[0] == '0'):
		break;
		
	aLen = len(a)
	bLen = len(b)
	carryCount = 0
	carry =  0
	 
	for i in range(max(aLen, bLen)):
		aLen = aLen - 1
		bLen = bLen - 1
		
		if aLen < 0:
			one = 0
		else:
			one = ord(a[aLen]) - 48
			
		if bLen < 0:
			two = 0
		else:
			two = ord(b[bLen]) - 48
		
		if (carry + one + two) >= 10:
			carry = 1;
			carryCount += 1
		else:
			carry = 0
	
	if carryCount == 0:
		print('No carry operation.')
	elif carryCount == 1:
		print('1 carry operation.')
	else:
		print(carryCount, 'carry operations.')	
