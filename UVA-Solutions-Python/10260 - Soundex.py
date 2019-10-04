# 10260 - Soundex

item = [0 for i in range(27)]

item.insert(ord('B')-64,1)
item.insert(ord('C')-64,2)
item.insert(ord('D')-64,3)
item.insert(ord('F')-64,1)
item.insert(ord('G')-64,2)
item.insert(ord('J')-64,2)
item.insert(ord('K')-64,2)
item.insert(ord('L')-64,4)
item.insert(ord('M')-64,5)
item.insert(ord('N')-64,5)
item.insert(ord('P')-64,1)
item.insert(ord('Q')-64,2)
item.insert(ord('R')-64,6)
item.insert(ord('S')-64,2)
item.insert(ord('T')-64,3)
item.insert(ord('V')-64,1)
item.insert(ord('X')-64,2)
item.insert(ord('Z')-64,2)

while True:
	try:
		sound = input()
		for i in range(len(sound)):
			c = ord(sound[i])-64
			d = ord(sound[i-1])-64
			if (item[c] != 0) and (item[c] != item[d] or i == 0):
				print(item[c], end="")
		print()
	except EOFError:
		break;
