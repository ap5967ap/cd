# d={1: 'Python', 2: 'Java', 3: 'Ruby', 4: 'Scala'}
# print(d.items()) #The items() method will return each item in a dictionary, as tuples in a list.
# print(d.keys())
# print(d.values()) 
# print(d.pop(1))  #raises keyerror exception if key is not present <SYNTAX:pop(key)>
# #pop -remove specified key and return the corresponding value. If the key is not found, return the default if given; otherwise, raise a KeyError.
# d.update({31: "Scala"}) #updates the key's value. if it is not present then it gives error
# print("update",d)
# # To determine if a specified key is present in a dictionary use the in keyword
# # The popitem() method removes the last inserted item returns removed item
# print(d.popitem()) 
# # dict.clear or  del dict can delete complete dictioniary making it {}
# # use del dict["key"] to delete that key
# # using values() method iterate over dict values
# thisdict =	{"brand": "Ford",  "model": "Mustang", "year": 1969}
# for x in thisdict.values():
#   print(x)


# # Loop through both keys and values, by using the items() method:
# for x, y in thisdict.items():
#   print(x, y)


# # fromkeys() in dict
# key=("ap","ankit","aditya","abhishek")
# value=(1,2,3,4)
# va=0
# dict1=dict.fromkeys(key,value)
# print(dict1) #gives {'ap': (1, 2, 3, 4), 'ankit': (1, 2, 3, 4), 'aditya': (1, 2, 3, 4), 'abhishek': (1, 2, 3, 4)}
# print(dict.fromkeys(key,va)) #gives {'ap': 0, 'ankit': 0, 'aditya': 0, 'abhishek': 0}
# print(dict.fromkeys(key)) #default value is "None"
seq = {'a', 'b', 'c', 'd', 'e'}
lis1 = [2, 3]
res_dict = dict.fromkeys(seq, lis1)
print((res_dict))
lis1.append(4)
print((res_dict)) #CHANGE
lis1 = [2, 3]
print('\n')
res_dict2 = {key: list(lis1) for key in seq}
print((res_dict2))
lis1.append(4)
print( str(res_dict2)) #NO CHANGE


# # ------------------------------
# # items method is automatically updated
# d={1: 'Python', 2: 'Java', 3: 'Ruby', 4: 'Scala'}
# items=d.items() 
# print(items)
# d[3]="Ap"
# print(items) #the value is updated

# --------------
# setdefault(key,default_value) method 
# 1.on any existing key of a dictionary, it'll return the value of the existing key, but will not modify the dictionary key.
# 2.non-existing key of a dictionary, it’ll return the new value added and update the dictionary with the key, value pair
# d={1: 'Python', 2: 'Java', 3: 'Ruby', 4: 'Scala'}
# d.setdefault("ankit",78)#not present - modified
# print(d)
# d.setdefault("ap",7410) #present - not modified
# print(d)