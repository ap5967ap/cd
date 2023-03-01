# # Write a Python program to replace the last value of tuples in a list
# l=[(10, 20, 40), (40, 50, 60), (70, 80, 90)]
# r=1100
# l2=[]
# for i in l:
#     x=list(i)
#     x[-1]=r
#     l2.append(tuple(x))
# print(l2)

# Write a Python program to remove an empty tuple(s) from a list of tuples. Go to the editor
# Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
# Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']
# x=[(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
# for i in x[:]: #done x[:] as if we do only x then list will be same and all () will not be deleted
#     if i==():
#         x.remove(i)
# print(x)


# . Write a Python program to convert a given tuple of positive integers into an integer.
# (1, 2, 3)
# Convert the said tuple of positive integers into an integer:
# 123
# t=tuple(map(str,input().split()))
# print(t)
# i=''
# for ii in t:
#     i+=ii
# print(int(i))



# Write a Python program to convert a list of tuples into a dictionary.
#create a list
l = [("x", 1), ("x", 2), ("x", 3), ("y", 1), ("y", 2), ("z", 1)]
d = {}
for a, b in l:
    d.setdefault(a, []).append(b)
print (d)
