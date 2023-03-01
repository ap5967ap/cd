# Python – Sorted order Dictionary items pairing
test_dict = {45 : 3, 7 : 8, 98 : 4, 10 : 12, 65 : 90, 15 : 19}
print(sorted(test_dict)) #returns sorted keys

key=list(test_dict.keys())
values=list(test_dict.values())
key.sort()
values.sort()
d=zip(key,values)
print(dict(d))
d=zip(key,values)
print(*d) #gives (7, 3) (10, 4) (15, 8) (45, 12) (65, 19) (98, 90)
print(dict([('a', 0), ('b', 1), ('c', 2)]))  #gives {'a': 0, 'b': 1, 'c': 2}
'''
list(zip('abcdefg', range(3), range(4)))
[('a', 0, 0), ('b', 1, 1), ('c', 2, 2)]
The zip object yields n-length tuples, where n is the number of iterables passed as positional arguments to zip(). 
The i-th element in every tuple comes from the i-th iterable argument to zip().
 This continues until the shortest argument is exhausted.'''