# 494 - Kindergarten Counting Game
while True:
		try:
			a = list(input().split())
		except EOFError:
			break
		
		result = 0
		for j in a:
			lock = 0
			for i in j:
					if (65 <= ord(i) and ord(i) <= 90) or (97 <= ord(i) and ord(i) <= 122):
						if lock == 0:
							result += 1
							lock = 1
					else:
						if lock ==1:
							lock = 0 
		print(result)
