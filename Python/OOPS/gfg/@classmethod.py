# classmethod() methods are bound to a class rather than an object.
#  Class methods can be called by both class and object. These methods can be called with a class or with an object. 
# Class methods takes cls as first argument
# Python program to demonstrate


from datetime import date

class Person:
	def __init__(self, name, age):
		self.name = name
		self.age = age
	@classmethod
	def fromBirthYear(cls, name, year):
		return cls(name, date.today().year - year)
	@staticmethod
	def isAdult(age):
		return age > 18

person1 = Person('mayank', 21)
person2 = Person.fromBirthYear('mayank', 1996)

print(person1.age)
print(person2.age)

# print the result
print(Person.isAdult(22))

