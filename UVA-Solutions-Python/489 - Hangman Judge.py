# 489 Hangman Judge

while True:
	round = int(input())
	if(round==-1):
		break
	solution = input()
	guess = input()
	stroke = 0
	i = 0
	while i<len(guess) and stroke <=6 and solution!="" :
		if(solution.find(guess[i])!=-1):
			solution=solution.replace(guess[i],"")
		else:
			stroke+=1
		i+=1

	print("Round",round)
	if(stroke == 7):
		print("You lose.")
	elif(solution == ""):
		print("You win.")
	else:
		print("You chickened out.")
		
