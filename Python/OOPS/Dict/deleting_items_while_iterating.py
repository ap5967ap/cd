myDict = {1: 'Geeks', 2: 'For', 3: 'Geeks'}
# for key in myDict.keys(): #gives error --RuntimeError: dictionary changed size during iteration
# 	if key == 2:
# 		del myDict[key]
# print(myDict)

# # Method 1
# delete = [key for key in myDict if key == 3]
# for key in delete:
#     del myDict[key]
# print(myDict)

# # Method 2
# delete = []
# for key in myDict:
#     if key == 3:
#         delete.append(key)
 
# for i in delete:
#     del myDict[i]
# print(myDict)

# Method 3
myDict = {1: 'Geeks', 2: 'For', 3: 'Geeks'}
for key in list(myDict):
    if key == 2:
        del myDict[key]
print(myDict)