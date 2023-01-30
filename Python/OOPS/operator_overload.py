class Test:
    def __init__(self, a, b):
        self.a = a
        self.b = b
  
    def __repr__(self):
        return "Test a:%s b:%s" % (self.a, self.b)
  
    def __str__(self):
        return "From str method of Test: a is %s b is %s" %(self.a, self.b)#str is used first if str  is not there then repr is used
# Printing objects achieved by using __repr__ or __str__ methods.
x=Test(2,3)
print(x)