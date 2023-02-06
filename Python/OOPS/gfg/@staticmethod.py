# When function decorated with @staticmethod is called, we don’t pass an instance of the class to it as it is normally done with methods.
# It means that the function is put inside the class but it cannot access the instance of that class.
# It can be called either on the class (e.g. C.f()) or on an instance (e.g. C().f()). 
# Both the class and the instance are ignored, and neither is passed implicitly as the first argument to the method.
class Ap:
    def __init__(self):
        self.x=45
        self.y=56
    
    @staticmethod
    def add(x,y):
        return x + y

    @staticmethod
    def add1(self):
        return self.x + self.y

    def add2(self):
        return self.x + self.y
x=Ap()
print(Ap.add(1,2)) #gives 3
print(Ap.add1(x)) #gives 45+56 =101
print(Ap.add2(x)) #gives 45+56


