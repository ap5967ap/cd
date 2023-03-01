# def pa(n):
#     if(n<0):
#         print(n)
#         return
#     print(n)
#     pa(n-5)
#     print(n)
# pa(16)
# def prime(n,i):
#     if(n%i==0):
#         return False
#     if(i==n-1):
#         return True
#     else:
#         return prime(n,i+1)
# print(prime(41011,2))
# def isPrime(n):
#     for i in range(2,n):
#         if(n%i==0):
#             return False
#             break
#     return True        
# def primefactors(n,i):
#     if(n%i==0 and isPrime(i)):
#         print(i)
#     if(i==n):
#         return 
#     else:
#         primefactors(n,i+1)
# primefactors(56,2)
# def prime_factorisation(n):
#     c=2
#     while n>1:
#         if n%c==0:
#             print(c)
#             n=n/c
#         else:
#             c+=1
#     return 0
# prime_factorisation(56)
# def digits(n,dgt):
#     if(n==0):
#         return dgt
#     else:
#         n=n//10
#         dgt+=1
#         return digits(n,dgt)
# print(digits(56,0))