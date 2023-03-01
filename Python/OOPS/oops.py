# class Person():
#     def __init__(self,first,last):
#         self.fisrt = first
#         self.last=last
#     def __str__(self):
#         return f'My name is {self.fisrt}  {self.last}'
# class Student(Person):
#     def __init__(self, first, last, rollNo):
#         Person.__init__(self,first, last)
#         self.rollNo = rollNo
#     def __str__(self):
#         return f'My name is {self.fisrt} {self.last} rollNo {self.rollNo}'
# # student1 = Student('Rishi', 'Dutt') ERROR
# student1 = Student('Rishi', 'Dutt','IMT2022074')
# print(student1)
class Item:
    def __init__(self,name:str,price:float,quantity=0): ##NO ERROR
        self.name = name
        self.price = price
    def value(self):
        return f'The price of the item is {self.price*45}'
it=Item("hello",56.2)
# print(Item.value(it)) 
# same as
print(it.value())
# if we pass
it1=Item(56,"41","56")
print(it1.value())