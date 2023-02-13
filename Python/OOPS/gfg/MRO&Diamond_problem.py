'''
Method Resolution Order(MRO) it denotes the way a programming language resolves a method or attribute
First, the method or attribute is searched within a class and then it follows the order we specified while inheriting. 
This order is also called Linearization of a class and set of rules are called MRO(Method Resolution Order). 
In the above example the methods that are invoked is from class B but not from class A, and this is due to Method Resolution Order(MRO).
 '''

'''MRO New class4
 first parent inherits from Python root "object" class
 new style classes use C3 Linearization algorithm for method resolution while doing multiple inheritances. 
 


 C3 Linearization Algorithm works on three rules: 
 1.Inheritance graph determines the structure of method resolution order.
 2.User have to visit the super class only after the method of the local classes are visited.
 3.Monotonicity
  '''
class NewStyleClass(object):
    pass


class A:
    def rk(self):
        print(" In class A")
class B(A):
    def rk(self):
        print(" In class B")
class C(A):
    def rk(self):
        print("In class C")

# classes ordering
class D(B, C):
    pass
    
r = D()
r.rk()
# MRO order -  D->B->C->A


# __mro__ attribute or mro() method. By using these methods we can display the order in which methods are resolved.
# Python program to show the order
# in which methods are resolved

class A:
	def rk(self):
		print(" In class A")
class B:
	def rk(self):
		print(" In class B")

# classes ordering
class C(A, B):
	def __init__(self):
		print("Constructor C")

r = C()

# it prints the lookup order
print(C.__mro__)
print(C.mro())
