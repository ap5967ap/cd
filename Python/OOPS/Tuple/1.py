thistuple = ("apple", "banana", "cherry")
y = ("orange",)
thistuple += y
print(thistuple)
# we can update items in tuple using list


#UNPACKING
thistuple = ("apple", "banana", "cherry")
a,b,c=thistuple
print(a,b,c)

th=(1,2,45,3,4,5,5,6)
a,*b,c=th
x,y,*z=th
*k,l,m=th
print(a,b,c)
print(x,y,z)
print(k,l,m)

# + and * opertor work perfectly on tuple
# count()	Returns the number of times a specified value occurs in a tuple
# index()	Searches the tuple for a specified value and returns the position of where it was found
