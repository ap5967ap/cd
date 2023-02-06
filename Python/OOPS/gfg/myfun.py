# def myfun():
#     print ("Always executed")
#     if __name__ == "__main__":
#         print ("Executed when invoked directly")
#     else:
#         print ("Executed when imported")
# # myfun()

# Iterators are objects that can be iterated upon.
# Python uses the __iter__() method to return an iterator object of the class.
# The iterator object then uses the __next__() method to get the next item.
# for loops stops when StopIteration Exception is raised.
# This program will reverse the string that is passed
# to it from the main function
# class Reverse:
# 	def __init__(self, data):
# 		self.data = data
# 		self.index = len(data)		

# 	def __iter__(self):
# 		return self
    
# 	def __next__(self):
# 		if self.index == 0:
# 			raise StopIteration	
# 		self.index-= 1
# 		return self.data[self.index]

# def Main():
# 	rev = Reverse('Drapsicle')
# 	for char in rev:#uses __iter__ and __next__
# 		print(char)

# if __name__=='__main__':
# 	Main()


# Another way of creating iterators.
# Uses a function rather than a separate class
# Generates the background code for the next() and iter() methods
# Uses a special statement called yield which saves the state of the generator and set a resume point for when next() is called again.

# A Python program to demonstrate working of Generators
# def Reverse(data):
# 	# this is like counting from 100 to 1 by taking one(-1)
# 	# step backward.
# 	for index in range(len(data)-1, -1, -1):
# 		yield data[index]

# def Main():
# 	rev = Reverse('Ankit')
# 	for char in rev:
# 		print(char)
# 	# data ='Harssh'
# 	# print(list(data[i] for i in range(len(data)-1, -1, -1)))

# if __name__=="__main__":
# 	Main()
# issubclass(Derived,Base)
# isinstance(obj,class)

# super()
# Python example to show that base
# class members can be accessed in
# derived class using super()
class Base(object):

    # Constructor
    def __init__(self, x):
        self.x = x	

class Derived(Base):

    # Constructor
    def __init__(self, x, y):
        
        ''' In Python 3.x, "super().__init__(name)"
            also works
        '''

        super(Derived, self).__init__(x) #super can be called using parameters super(derived class, object)
        self.y = y
    def __init__(self, x,y):
        self.y = y
        Base.__init__(self,x)
    def printXY(self):

    # Note that Base.x won't work here
    # because super() is used in constructor
        print(self.x, self.y)


# Driver Code
d = Derived(10, 20)
d.printXY()
