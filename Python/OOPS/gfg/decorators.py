# # Following are important facts about functions in Python that are useful to understand decorator functions.
# # In Python, we can define a function inside another function.
# # In Python, a function can be passed as parameter to another function (a function can also return another function).
# def messageWithWelcome(str):
#     def addWelcome():
#         return "Welcome to "
#     return addWelcome()+str

# def site(site_name):
#     return site_name
# print (messageWithWelcome(site("GeeksforGeeks")))



# # ALTER
# def decorate_message(fun):
# 	def addWelcome(site_name):
# 		return "Welcome to " + fun(site_name)
# 	return addWelcome

# @decorate_message
# def site(site_name):
# 	return site_name

# print(site("GeeksforGeeks"))



# def dec1(func):
#     def inner():
#         print("this ")
#         func()
#         print("boy")
#     return inner

# @dec1
# def dec2():
#     print("is a")

# dec2()

# # A Python example to demonstrate that
# # decorators can be useful attach data

# # A decorator function to attach
# # data to func
# def attach_data(func):
# 	func.data = 3
# 	return func

# @attach_data
# def add (x, y):
# 	return x + y

# # Driver code

# # This call is equivalent to attach_data()
# # with add() as parameter
# print(add(2, 3))

# print(add.data)

'''
functions are first class objects which means that functions in Python can be used or passed as arguments.
Properties of first class functions:
A function is an instance of the Object type.
You can store the function in a variable.
You can pass the function as a parameter to another function.
You can return the function from a function.
You can store them in data structures such as hash tables, lists
'''

# Chaining Decorators
# # Firstly the inner decorator will work and then the outer decorator.
# # code for testing decorator chaining
# def decor1(func):
# 	def inner():
# 		x = func()
# 		return x * x
# 	return inner

# def decor(func):
# 	def inner():
# 		x = func()
# 		return 2 * x
# 	return inner

# @decor1
# @decor
# def num():
# 	return 10

# @decor
# @decor1
# def num2():
# 	return 10

# print(num())
# print(num2())




# Python program showing
# use of __call__() method

# class MyDecorator:
# 	def __init__(self, function):
# 		self.function = function
    
# 	def __call__(self): #__call__ makes class a callable object

# 		# We can add some code
# 		# before function call

# 		self.function()

# 		# We can also add some code
# 		# after function call.


# # adding class decorator to the function
# @MyDecorator
# def function():
# 	print("GeeksforGeeks")

# function()

# class MyDecorator2:
#     def __init__(self, function):
#         self.function = function
#     def __call__(self): #__call__ makes class a callable object

#         # We can add some code
#         # before function call

#         print("Hi")

#         # We can also add some code
#         # after function call.
# @MyDecorator2
# def func2():
#     print("GeeksForGeeks")
# func2() #when this is called then MyDecorator is called with func2() as paramter (or attribute)

# class MyDecorator2:
#     def __init__(self, function):
#         self.function = function
#     def __call__(self): #__call__ makes class a callable object

#         # We can add some code
#         # before function call

#         print("Hi")
#         func2()
#         # We can also add some code
#         # after function call.
# @MyDecorator2
# def func2():
#     print("GeeksForGeeks")
# func2.__init__(func2)  
# print(func2())
