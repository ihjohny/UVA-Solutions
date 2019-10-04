# 12554 - A Special "Happy Birthday" Song!!!
# import sys
# Print = sys.stdout.write
n = int(input())
people = []
song = ["Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"]
for i in range(n):
	a = input()
	people.append(a)

peopleComplete = 0
songComplete = 0
j=0
k=0;
while(peopleComplete!=1 or songComplete!=1):
	print(people[j],": ",song[k],sep="")
	j+=1
	k+=1
	if(j==n):
		j=0 
		peopleComplete=1
		
	if(k==16):
		k=0 
		if(peopleComplete==1):
			 songComplete=1

