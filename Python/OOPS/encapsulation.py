# Python program to
# demonstrate private members

# Creating a Base class
class Base:
	def __init__(self):
		self.a = "GeeksforGeeks"
		self.__c = "GeeksforGeeks"#c is a private attribute of this class

# Creating a derived class
class Derived(Base):
	def __init__(self):

		# Calling constructor of
		# Base class
		Base.__init__(self)
		print("Calling private member of base class: ")
		print(self.__c)#DOES NOT PRINT


# Driver code
obj1 = Base()
# print(obj1.a)

# Uncommenting 
# print(obj1.__c)# ERROR
# raise an AttributeError

# Uncommenting 
# obj2 = Derived() 
# also raise an AtrributeError as
# private member of base class
# is called inside derived class

class MyClass:

	# Hidden member of MyClass
	__hiddenVariable = 0
	
	# A member method that changes
	# __hiddenVariable
	def add(self, increment):
		self.__hiddenVariable += increment
		print (self.__hiddenVariable)

# Driver code
myObject = MyClass()	
myObject.add(2)
myObject.add(5)

# This line causes error
# print (myObject.__hiddenVariable)#ERROR
# TRICK TO ACCESS PRIVATE / ENCAPSULATED VARIABLES
class MyClass2:
    __hiddenVariable =25
x=MyClass2()
# print(x.__hiddenVariable)#ERROR
print(x._MyClass2__hiddenVariable) #WORKS
# also by
print(getattr(x,'__hiddenVariable'))

