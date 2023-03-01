# # code
# class Person:

# 	# Constructor
# 	def __init__(self, name, id):
# 		self.name = name
# 		self.id = id

# 	# To check if this person is an employee
# 	def Display(self):
# 		print(self.name, self.id)
	

# class Emp2(Person):
#     def __init__(self, name, id): #constructor of parent class is not called
#         self.name1=name
#     def print(self):
#         print("emp2 class")
# class Emp(Person):
	
# 	# def __init__(self, name, id):
# 	# 	self.name_ = name
#     #if it is commented,then it gives no error
#     # as constructor of parent is automatically called
# 	def Print(self):
# 		print("Emp class called")

# Emp_details = Emp("Mayank", 103)

# # calling parent class function
# print(Emp_details.name)

# e2=Emp2("adityya",44)
# # print(e2.name) # ERROR
# print(e2.name1) #OK
# # print(e2.id) # ERROR




class Mammal():

	def __init__(self, name):
		print(name, "Is a mammal")

class canFly(Mammal):

	def __init__(self, canFly_name):
		print(canFly_name, "cannot fly")

		# Calling Parent class
		# Constructor
		super().__init__(canFly_name)

class canSwim(Mammal):

	def __init__(self, canSwim_name):

		print(canSwim_name, "cannot swim")

		super().__init__(canSwim_name)

class Animal(canFly, canSwim):

	def __init__(self, name):
		super().__init__(name)

# Driver Code
Carol = Animal("Dog")
