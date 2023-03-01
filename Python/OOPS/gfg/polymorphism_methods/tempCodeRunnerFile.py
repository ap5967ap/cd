class Parent1():
	def display(self):
		print("Inside Parent1")
class Parent2():
	def display(self):
		print("Inside Parent2")
class Child(Parent1, Parent2):
	def show(self):
		print("Inside Child")
class Child1(Parent2, Parent1): #whose name first written that is called
	def show(self):
		print("Inside Child1")
obj = Child()
obj1=Child1()
obj.show()
obj.display()
obj1.show()
obj1.display()
