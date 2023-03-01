a=15
b=7
c=17
print(id(a))
def something():
    a=9 #local variable
    x=globals()['a']#x get value of global variable a
    print(id(x))
    x=x+1 value of global variable is unchanged
    print(x)
    print(a)
something()
print(a)