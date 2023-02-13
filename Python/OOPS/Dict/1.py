# Values in a dictionary can be of any data type and can be duplicated, whereas keys can’t be repeated and must be immutable. 
# Updating an existing value in a Dictionary can be done by using the built-in update() method
#  Dictionary keys must be unique and must be of an immutable data type such as a: string, integer or tuple.
# Creating an empty Dictionary
# Dict = {}
# print(Dict)
# Dict[0] = 'Geeks'
# Dict[2] = 'For'
# Dict[3] = 1
# print(Dict)
# Dict['Value_set'] = 2, 3, 4 #CREATES A TUPLE
# print(Dict)
# Dict[2] = 'Welcome'
# print(Dict)
# Dict[5] = {'Nested': {'1': 'Life', '2': 'Geeks'}}
# print(Dict)


# ----
# get method
d={'coding': 1, 'thinking': 2}
print(d.get('coding'))

# 2: Python Dictionary get() method chained
test_dict = {'Gfg' : {'is' : 'best'}}
print("The original dictionary is : " + str(test_dict))
res = test_dict.get('Gfg', {}).get('is')    
print("The nested safely accessed value is : " + str(res))
