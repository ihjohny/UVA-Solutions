# 10110 - Light, more light
import math as m
while(True):
	n = int(input())
	if(n == 0):
		break;
	sq = int(m.sqrt(n))
	if((sq * sq) == n):
		print("yes")
	else:
		print("no")
