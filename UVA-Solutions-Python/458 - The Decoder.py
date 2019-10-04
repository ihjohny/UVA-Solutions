# 458 - The Decoder

while True:
		sentence = str(input())
		if(len(sentence)>0):
			decrypted=''
			for i in range(len(sentence)):
				decrypted+=chr(ord(sentence[i])-7)
			print(decrypted)
		else:
			break
		
