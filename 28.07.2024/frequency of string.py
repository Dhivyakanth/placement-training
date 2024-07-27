str = input('Enter the string : ')
freq = {}
for i in str:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1
maximium = max(freq, key = freq.get)
print("Entered String is ", str)
print(f"{maximum} is the maximum frequency character with frequency of {freq[maximum]}")
