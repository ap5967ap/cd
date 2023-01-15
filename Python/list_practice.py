# Unique Elements of a List
# lst=[1,2,2,4,3,1,2,1,3,4]
# lstt=[]
# for i in lst:
#     if i not in lstt:
#         lstt.append(i)
# print(lstt)
# count number of unique values in list
# a=[1,2,3,4,1,2,2,3,1,3,4,1,5]
# lst=[]
# for i in a:
#     if i not in lst:
#         lst.append(i)
# print(len(lst))

# l=[x for x in range(1,10)]
# a,*b,c,d,e=l # * is left over (all) unpacking operator
# print(a, b,c,d,e )

# a=list("gfg is best for Geeks")
# # swap e and g in above list
# a=[i.replace('g','*').replace('e','g').replace('*','e') for i in a]
# print(a)

# # count frequency in python
# a=[1,2,3,4,1,2,2,3,1,3,4,1,5]
# import pandas as pd
# l=pd.Series(a)

# product of all elements in list
# a=[1,2,3,4,5]
# import math
# print(math.prod(a))


# # Write a Python program to generate all permutations of a list in Python. 
# a=list("abcdef")
# import itertools
# print(list(itertools.permutations(a)))

# flatten a 2D lists
a=[[1,2,3],[4,5,6],[7,8,9]]
lst=[a[i][j] for j in range(len(a)) for i in range(len(a[0]))]
print(lst)