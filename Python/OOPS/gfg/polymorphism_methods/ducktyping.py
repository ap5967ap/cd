# Using Duck Typing, we do not check types at all. Instead we check for the presence of a given method or attribute.
# If it looks like a duck, swims like a duck, and quack like a duck, then it probably is a duck
# If the name of a given method or attribute is same is various classes then the method using that attribute doesn't care about the type of the attribute
class Ap:
    def __init__(self):
        self.name=56
    def __len__(self):
        return 12
    def sal(self):
        return f'ds'
class Sub:
    def __init__(self,age):
        self.age=age
    def execute(self, obj):
        return obj.sal()
class Sup:
    def __init__(self):
        pass
    def len(self,sd):
        return len(sd)
    def sdc(self,sub):
        return sub.age
Sub1=Sub(41)
Sup1=Sup()
Ap1=Ap()
print(Sub1.execute(Ap1)) #any object having a method sal() can be passed to this method of Sub1
# if we do 
# print(Sub1.execute(Sup1)) #gives error
print(Sup1.len(Ap1)) #OK
print(Sup1.len([1,2,3,4,5])) #OK
print(Sup1.sdc(Sub1)) #OK