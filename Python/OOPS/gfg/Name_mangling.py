# In Python, there is something called name mangling
# there is limited support for a valid use-case for class-private members to avoid name clashes of names with names defined by subclasses.
# Any identifier of the form __geek (at least two leading underscores or at most one trailing underscore) is replaced with _classname__identifier , where classname is the current class name with a leading underscore(s) stripped.
#  As long as it occurs within the definition of the class, this mangling is done.
# This is helpful for letting subclasses override methods without breaking intraclass method calls. 


# Name mangling with method overriding
# (generally without name mangling ) We cannot override a private method of a superclass, which is the one having double underscores before its name
# Python code to illustrate how mangling works
# With method overriding

class Map:
	def __init__(self):
		self.__geek()
		self.x=45
	def geek(self):
		print("In parent class") #during constructor
	
	# private copy of original geek() method
	__geek = geek	
	
class MapSubclass(Map):
		
	# provides new signature for geek() but
	# does not break __init__()
	def geek(self):		
		print("In Child class")
		
# Driver's code
obj = MapSubclass()
obj.geek()
print(obj.x)