# 694 	The Collatz Sequence
t=0
while True:
	t+=1
	a,l=map(int,input().split())
	aa=a
	if(a<0 and l<0):
		break;
	count=0
	while(a<=l and a!=1):
		count+=1
		if(a%2==0):
			a=a/2
		else:
			a=3*a+1
	if(a==1):
		count+=1
	print("Case "+str(t)+": A = "+str(aa)+", limit = "+str(l)+", number of terms = "+str(count))
