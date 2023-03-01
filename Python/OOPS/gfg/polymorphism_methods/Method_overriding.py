# The version of a method that is executed will be determined by the object that is used to invoke it. 
# If an object of a parent class is used to invoke the method, then the version in the parent class will be executed,
# but if an object of the subclass is used to invoke the method, then the version in the child class will be executed. 
# In other words, it is the type of the object being referred to (not the type of the reference variable) that determines which version of an overridden method will be executed.
# Python program to demonstrate
# overriding in multiple inheritance
# class Parent1():
# 	def display(self):
# 		print("Inside Parent1")
# class Parent2():
# 	def display(self):
# 		print("Inside Parent2")
# class Child(Parent1, Parent2):
# 	def show(self):
# 		print("Inside Child")
# class Child1(Parent2, Parent1): #whose name first written that is called
# 	def show(self):
# 		print("Inside Child1")
# obj = Child()
# obj1=Child1()
# obj.show()
# obj.display()
# obj1.show()
# obj1.display()


# Overriding Object overriding
# using super()
class Parent():
    def show(self):
        print("Inside Parent")

class Child(Parent):
    def show(self):
        super().show()
        print("Inside Child")
obj = Child()
obj.show()