# Python program to show that the variables with a value
# assigned in class declaration, are class variables

# Class for Computer Science Student
class CSStudent:
	stream = 'cse'				 # Class Variable
	def __init__(self,name,roll):
		self.name = name		 # Instance Variable
		self.roll = roll		 # Instance Variable

# Objects of CSStudent class
a = CSStudent('Geek', 1)
b = CSStudent('Nerd', 2)
c = CSStudent('Kisg', 3)
print(a.stream) # prints "cse"
print(b.stream) # prints "cse"
print(c.stream) # prints "cse"
print(a.name) # prints "Geek"
print(b.name) # prints "Nerd"
print(c.name) # prints "Kisg"
print(a.roll) # prints "1"
print(b.roll) # prints "2"
print(c.roll) # prints "3"

# Class variables can be accessed using class
# name also
print(CSStudent.stream) # prints "cse"

# Now if we change the stream for just a it won't be changed for b
a.stream = 'ece'
print(a.stream) # prints 'ece'
print(b.stream) # prints 'cse'
print(c.stream) # prints 'cse
# To change the stream for all instances of the class we can change it
# directly from the class
CSStudent.stream = 'mech'

print(a.stream) # prints 'ece'
print(b.stream) # prints 'mech'
print(c.stream) # prints 'mech'

# By chainging the class attribute we change the value of those attributes which are not earlier changed in class 
