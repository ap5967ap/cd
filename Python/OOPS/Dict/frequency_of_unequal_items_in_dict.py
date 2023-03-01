test_dict1 = {'gfg' : 1, 'is' : 2, 'best' : 3}
test_dict2 = {'gfg' : 1, 'is' : 2, 'good' : 3}
res = {key: test_dict1[key] for key in test_dict1 if key not in test_dict2}
print(len(res))