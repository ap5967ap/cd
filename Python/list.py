'''
Python Lists are just like dynamically sized arrays, declared in other languages (vector in C++ and ArrayList in Java). 
In simple language, a list is a collection of things, enclosed in [ ] and separated by comma
A list may contain duplicate values with their distinct positions
Only one element at a time can be added to the list by using the append() method, for the addition of multiple elements with the append() method, loops are used. 
Tuples can also be added to the list with the use of the append method because tuples are immutable. 
Unlike Sets, Lists can also be added to the existing list with the use of the append() method.

'''
# string = input("Enter elements (Space-Separated): ")
# lst = string.split() 
# print('The list is:', lst)
# # use of map
# x,y,z = map(int, input().split())
#
# WE can append tupples in list
# x=(1,2)
# lst=[]
# for i in range(1,5+1):
#     lst.append(i)
# print(lst)
# lst.append(x)#WE can append tupples in list
# print(lst)
# 
# to add any element at any position we use insert() method list.insert(position of element, element)
# lst=[1,2,3,4,5]
# lst.insert(2,'e')
# lst.insert(2,[1,2,3,4])
# # print(lst)
# lst=['a','b','c','d','e']
# lst[2:3]=[2,3,4,5,6,7] #gives no error even if space is less or more
# print(lst)


# extend ()-> iterates over its argument and adding each element to the list and extending the list. 
# we add pass any iterable element in extend
# a='hello'
# lst=[1,2,3,4,5]
# lst.extend(a)
# print(lst) #gives [1, 2, 3, 4, 5, 'h', 'e', 'l', 'l', 'o']
# import pandas as pd
# a=pd.Series([1,2,3,4])
# lst.extend(a)
# print(lst) #gives [1, 2, 3, 4, 5, 'h', 'e', 'l', 'l', 'o', 1, 2, 3, 4]
# # => we can extend any iterable element to list
 
# a="hello"
# lst=[]
# lst.extend(a)# adds each element of a to lst
# lst.reverse()
# print(lst)
# WE GET NONE WHEN WE DO print(lst.reverse())
# INSTEAD Do, lst.reverse() and then print(lst)

# remove() is an inbuilt function that removes the first occurrence of a given object from the List. list.remove(object_to_be_removed)
#If element does not exists it gives an exception 
# to remove all occurrence of element use,
# lst=[1,2,3,1,2,3,4,1,2,1,1,2]
# for i in range(lst.count(1)):
#     lst.remove(1)
# print(lst)
# ALTER TO DO IT
# lst=[1,2,3,1,2,3,4,1,2,1,1,2]
# while 1 in lst:
#     lst.remove(1)
# print(lst)

# pop() function can also be used to remove and return an element from the list,
#  but by default it removes only the last element of the list
#  to remove an element from a specific position of the List, the index of the element is passed as an argument to the pop() method
# gives exception when index is out of range

# list comphrehension
# newList = [ expression(element) for element in oldList if condition ] oldList is any iterable  from other iterables like tuples, strings, arrays, lists, range, etc.
# odd_square = [x ** 2 for x in range(1, 11) if x % 2 == 1] # range() is an iterable class 
# x=range(0,10)
# print(x[3]) # gives 3
# List = [character for character in [1, 2, 3]]
# print(List)
# list = [i for i in range(11) if i % 2 == 0]
# print(list)

# matrix using list
# lst=[[j for j in range(3)] for i in range(3)]
# print(lst)

# # matrix
# lst=[]
# for i in range(3):
#     lst.append([])
#     for j in range(3):
#         lst[i].append(j)
# print(lst)

# lis=["even number" if i%2==0 else "odd number"for i in range(10) ]
# print(lis)

# lst=[num**2 for num in range(10)]
# print(lst)

# Transpore of 2D matrix
# a="10 20 30 100"
# b="40 50 60 200"
# c="70 80 90 300"
# lst=[[],[],[]]
# lst[0].extend(a.split())
# lst[1].extend(b.split())
# lst[2].extend(c.split())
# print(lst)
# print(lst[1][0])
# # TRANSPOSE
# lst=[[lst[j][i] for j in range(len(lst)) ] for i in range(len(lst[0]))]
# print(lst)

# x=[]
# for i in range(len(lst[0])):
#     x.append([])
#     for j in range(len(lst)):
#         x[i].append(lst[j][i])
# print(x)

# Toggle the case of each character in list
# a="HZeLlO WorLzd"
# lst=list(a)
# lsst=[]
# for i in range(len(lst)):
#     if (ord(lst[i]))>91:
#         (lst[i])=chr(ord(lst[i])-32)
#     if lst [i]==" ":
#         continue
#     else:
#         (lst[i])=chr(ord(lst[i])+32)
# print(lst)

# : Reverse each string in a tuple
# a=("Hello","World","AP")
# lst=[x[::-1] for x in a]
# print(lst)

# # Display the sum of digits of all the odd elements in a list.
# def sumdig(n):
#     sum=0
#     while(n>0):
#         sum+=n%10
#         n=n//10
#     return sum
# lst= [367, 111, 562, 945, 6726, 873]
# newList=[sumdig(i) for i in lst if i%2==1]
# print(newList)

# converting 2D list to 1D list
# lst=[[1,2,3],[4,5,6],[7,8,9],[44,55,66]]
# ls=[]
# for i in range(len(lst)):
#     for j in range(len(lst[0])):
#         ls.append(lst[i][j])
# print(ls)
# # using list comprehension
# ls=[]
# ls=[j for i in lst for j in i]
# print(ls)

# following are functions on list (NOT METHODS)
# len(), max(), min(), in , not in

# list.count(element)
# list.index(element, start, end) // start and end are optional

# lst=[1,2,3,4,5,6,7,8,9]
# del lst[5]
# print(lst)
# # del can also delete range of index
# del lst[1:6]
# print(lst)

# pop() SYNTAX = list.pop(index)
# lst=[1,2,3,4,5,6,7,8,9]
# lst.pop(3)
# print(lst)
# the difference between pop and del is that pop returns deleted value while del returns None
# see https://drive.google.com/file/d/1-LSA5ttAc_xIsweifuGSoK17di6EScw-/view?usp=share_link
# insert(a, x) :- This function inserts an element at the position mentioned in its arguments. It takes 2 arguments, position and element to be added at respective position.
# remove() :- This function is used to delete the first occurrence of number mentioned in its arguments.

# list.clear() :- This function is used to erase all the elements of list. After this operation, list becomes empty.

lst=[4,5,6,9,7,1,10,4,5,6]
print(lst.index(5))
print(lst.index(7,3,9))# list.index(element,start,end)

# lst=[4,5,6,9,7,1,10,4,5,6]
# lst.sort(reverse=True) ## by default,sort() method is case sensitive, resulting in all capital letters being sorted before lower case letters:
# print(lst)
print(sorted(lst))
# sort() function is very similar to sorted() but unlike sorted it returns nothing and makes changes to the original sequence. 
# Moreover, sort() is a method of list class and can only be used with lists.
# The sorted() function returns a sorted list of the specific iterable object
# sorted returns sorted list but doesn't change original list
# sort returns None and makes changes in original list
# sum(list) gives sum of list