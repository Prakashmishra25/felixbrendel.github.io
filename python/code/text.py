text = input("Geben Sie einen Text ein: ")

dict = {}

for word in text.split():
    if word in dict:
        dict[word] += 1
    else:
        dict[word] = 1


for word in dict:
    print(f"{word}: {dict[word]}")
