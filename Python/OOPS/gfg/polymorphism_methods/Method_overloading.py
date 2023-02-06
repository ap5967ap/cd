# First product method.
# Takes two argument and print their
# product
# THE LATEST OF THE METHOD IS TAKEN 
# We may overload the methods but can only use the latest defined method.


def product(a, b):
    p = a * b
    print(p)

# Second product method
# Takes three argument and print their
# product


def product(a, b, c):
    p = a * b * c
    print(p)

# Uncommenting the below line shows an error
# product(4, 5)
# THE LATEST OF THE METHOD IS TAKEN 
# We may overload the methods but can only use the latest defined method.

# This line will call the second product method
product(4, 5, 5)

class Product(object):
    def __init__(self):
        pass
    def product(self,a,b):
        return a*b
    def product(self,a,b,c):
        return a*b*c
x=Product()
print(x.product(4,5,6))
# print(x.product(4,5)) #ERROR  
# THE LATEST OF THE METHOD IS TAKEN 
# We may overload the methods but can only use the latest defined method.
class Me():
    def m1(self,a,b):
        return a+b
    def m1(self,a,b):
        return a-b
x=Me()
print(x.m1(2,5))
print(x.m1(2,5))
# THE LATEST OF THE METHOD IS TAKEN 
# We may overload the methods but can only use the latest defined method.



class GFG:
	def sum(self, a = None, b = None, c = None):		
		s = 0
		if a != None and b != None and c != None:
			s = a + b + c
		elif a != None and b != None:
			s = a + b
		else:
			s = a
		return s
	
s = GFG()
print(s.sum(1))
print(s.sum(3, 5))
print(s.sum(1, 2, 3))
# ALL 3 WOKRS



# Function to take multiple arguments
class Ap:
    def __init__(self):
        pass
    def add(self,datatype, *args):
        if datatype =='int':
            answer = 0
        if datatype =='str':
            answer =''
        for x in args:
            answer = answer + x

        return (answer)

a=Ap()
print(a.add('int', 5, 6) ,a.add('str', 'Hi ', 'AP'), sep="\n")
# # GIVES ERROR

# x=Aa()
# print (x.add('int', 5, 6))
# print(x.add('str', 'Hi ', 'Geeks'))