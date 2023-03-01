# it is actually a CLASS VARIABLE
class Fruit :
    count =0
    def __init__(self,name,size=0,color=''):#default argurment 
        self.__name = name
        self.__size = size
        self.__color = color
        Fruit.count +=1 #class Variable is accessible using className.variableName
        # Class methods can be accessed using the syntax classname.methodname( ).
    def display():
        print(Fruit.count)
x=Fruit("apple",56,"red")
y=Fruit("banana",12,"yellow")
z=Fruit("orange",32,"orange")
# z.display() ERROR
Fruit.display() 