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