# A Python program to demonstrate
# working of deletion and re-insertion in
# regular and OrderedDict


from collections import OrderedDict

print("Before deleting:\n")

d = {}
print("Regular dictionary:")
d['a'] = 1
d['b'] = 2
d['c'] = 3
d['d'] = 4
for key, value in d.items():
	print(key, value)
	
od = OrderedDict()
print("\nOrdered dictionary:")
od['a'] = 1
od['b'] = 2
od['c'] = 3
od['d'] = 4
for key, value in od.items():
	print(key, value)


print("\nAfter deleting:\n")


print("Regular dictionary:")
d.pop('c')
for key, value in d.items():
	print(key, value)
	
print("\nOrdered dictionary:")
od.pop('c')
for key, value in od.items():
	print(key, value)


print("\nAfter re-inserting:\n")


print("Regular dictionary:")
d['c'] = 3
for key, value in d.items():
	print(key, value)
	
print("\nOrdered dictionary:")
od['c'] = 3
for key, value in od.items():
	print(key, value)
