# input :  [{“Gfg” : {“a” : 5, “b” : 8, “c” : 9}}, {“is” : {“j” : 8, “k” : 10}}, {“Best” : {“i” : 16}}], K = 8
# Output : [{‘a’: 5}, {‘c’: 9}, {‘k’: 10}, {‘i’: 16}]
#  : All the keys with value 8, (“b”, “j”) has been removed.
# d=[{'Gfg' : {'a' : 5, 'b' : 8, 'c' : 9}}, {'is' : {'j' : 8, 'k' : 10}}, {'Best' : {'i' : 16}}]
# d1={}
# K = 8
# for i in d:
#     for j in i.values():
#         for k,l in j.items():
#             if l!=K:
#                 d1[k]=l
# print(d1)

# ALTER
res = []
def hlper_fnc(test_dict):
	for key in test_dict:
		if type(test_dict[key]) == dict:
			hlper_fnc(test_dict[key])
		else:
			if test_dict[key] != K:
				res.append({key : test_dict[key]})
test_dict = {"Gfg" : {"a" : 5, "b" : 8, "c" : 9},
			"is" : {"f" : 8, "l" : { "j" : 8, "k" : 10}},
			"Best" : {"i" : {"k" : { "o" : 8}}}}
print("The original dictionary is : " + str(test_dict))
K = 8
hlper_fnc(test_dict)
print("The dictionary after value removal : " + str(res))
