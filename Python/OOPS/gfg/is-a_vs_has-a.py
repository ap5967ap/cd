# is-a-->inheritance
# has-a-->composition
# describe a class that references to one or more objects of other classes as an Instance variable.
#  Here, by using the class name or by creating the object we can access the members of one class inside another class.
#  It enables creating complex types by combining objects of different classes.
#  It means that a class Composite can contain an object of another class Component
# class Component:

# # composite class constructor
# 	def __init__(self):
# 		print('Component class object created...')

# 	# composite class instance method
# 	def m1(self):
# 		print('Component class m1() method executed...')


# class Composite:

# 	# composite class constructor
# 	def __init__(self):

# 		# creating object of component class
# 		self.obj1 = Component()
		
# 		print('Composite class object also created...')

# 	# composite class instance method
# 	def m2(self):
		
# 		print('Composite class m2() method executed...')

# 		# calling m1() method of component class
# 		self.obj1.m1()


# # creating object of composite class
# obj2 = Composite()

# # calling m2() method of composite class
# obj2.m2()

# --------------------------------------

# Abstraction
# Code to demonstrate Aggregation

# Salary class with the public method
# annual_salary()
# class Salary:
# 	def __init__(self, pay, bonus):
# 		self.pay = pay
# 		self.bonus = bonus

# 	def annual_salary(self):
# 		return (self.pay*12)+self.bonus


# # EmployeeOne class with public method
# # total_sal()
# class EmployeeOne:

# 	# Here the salary parameter reflects
# 	# upon the object of Salary class we
# 	# will pass as parameter later
# 	def __init__(self, name, age, sal):
# 		self.name = name
# 		self.age = age

# 		# initializing the sal parameter
# 		self.agg_salary = sal # Aggregation

# 	def total_sal(self):
# 		return self.agg_salary.annual_salary()

# # Here we are creating an object
# # of the Salary class
# # in which we are passing the
# # required parameters
# salary = Salary(10000, 1500)

# # Now we are passing the same
# # salary object we created
# # earlier as a parameter to
# # EmployeeOne class
# emp = EmployeeOne('Geek', 25, salary)

# print(emp.total_sal())
# # Aggregation is a concept in which an object of one class can own or access another independent object of another class. 

# # It represents Has-A’s relationship.
# # It is a unidirectional association i.e. a one-way relationship. For example, a department can have students but vice versa is not possible and thus unidirectional in nature.
# # In Aggregation, both the entries can survive individually which means ending one entity will not affect the other entity.