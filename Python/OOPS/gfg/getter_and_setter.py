# Using @property decorators
# class Hello:
#     def __init__(self):
#         self._age=59
    
#     @property
#     def age(self):
#         print("getter called")
#         return self._age
    
#     @age.setter
#     def age(self, value):
#         if value<18:
#             raise ValueError("Not eligible")
#         print("setter called")
#         self._age=value
# a=Hello()
# a.age=69
# print(a.age)



# Python program to illustrate the use of
# @property decorator

# Defining class
# class Portal:

# 	# Defining __init__ method
# 	def __init__(self):
# 		self.__name =''
	
# 	# Using @property decorator
# 	@property
	
# 	# Getter method
# 	def name(self):
# 		return self.__name
	
# 	# Setter method
# 	@name.setter
# 	def name(self, val):
# 		self.__name = val

# 	# Deleter method    
# 	@name.deleter
# 	def name(self):
# 	    del self.__name

# p = Portal()
# p.name = 'GeeksforGeeks'
# print (p.name)
# del p.name
# # As name is deleted above this
# # will throw an error
# # print (p.name)



# 2.Using property() function

# Python program to explain property() function
# Alphabet class
class Alphabet:
	def __init__(self, value):
		self._value = value

	# getting the values
	def getValue(self):
		print('Getting value')
		return self._value

	# setting the values
	def setValue(self, value):
		print('Setting value to ' + value)
		self._value = value

	# deleting the values
	def delValue(self):
		print('Deleting value')
		del self._value

	value = property(getValue, setValue,
					delValue )


# passing the value
x = Alphabet('GeeksforGeeks')
print(x.value)

x.value = 'GfG'

del x.value
