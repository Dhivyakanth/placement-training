test_list =input("Enter string: \n")
print("The original list is : " + str(test_list))
x = []
res = dict()
for i in test_list:
	x.append(i.lower())
a = list(set(x))
for i in a:
	res[i] = x.count(i)
print("Strings Frequency : " + str(dict(res)))
