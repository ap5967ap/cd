# a=10
# def incr():
#     global a
#     a=a+1
#     print(a)
# def recursion(n):
#     if n==0:
#         return
#     incr()
#     recursion(n-1)
# recursion(5)
# a=15
# b=7
# c=17
# print(id(a))
# def something():
#     a=9 #local variable
#     x=globals()['a']#x get value of global variable a
#     print(id(x))
#     x=x+1  #value of global variable is unchanged
#     print(x)
#     print(a)
# something()
# print(a)
# def outer_function(): 
#     superhero = "I am Batman!" 
#     print(f'Outer function says, {superhero}') 
#     def inner_function(): 
#         nonlocal superhero
#         superhero += " I am kidding!!" 
#         print(f'Inner function says, {superhero}')
#     inner_function() 
#     print(f'After return from Inner function, {superhero}')
# outer_function()
# def f():
#     x = 1
#     def g():
#         nonlocal x
#         print(f'In g, x is {x}')
#     def h():
#         x = 2
#         print(x)
#     g()
#     h()
#     print(x)
#     x = 4
#     print(x)
#     g()
# f()
# def rev(n,r):
    # if n==0:
        # return r
    # else:
        # return rev(n//10,r*10+n%10)
# print(rev(5346,0))