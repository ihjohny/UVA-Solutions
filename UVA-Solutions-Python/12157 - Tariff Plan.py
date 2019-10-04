# 12157 - Tariff Plan

case = int(input())
for i in range(case):
	n = int(input())
	callDuration = list(map(int, input().split()))
	mResult = 0
	jResult = 0
	for j in range(len(callDuration)):
		mResult = mResult + ( int ( callDuration[j] / 30) + 1 ) * 10
		jResult = jResult + ( int ( callDuration[j] / 60) + 1 ) * 15
	
	if mResult < jResult:
		print("Case ",i+1,": Mile ",mResult,sep="")
	elif mResult > jResult:
		print("Case ",i+1,": Juice ",jResult,sep="")
	else:
		print("Case ",i+1,": Mile Juice ",jResult,sep="")
		
