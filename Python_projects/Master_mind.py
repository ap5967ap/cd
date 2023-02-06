def gamerules():
    return f''' 
        Player 1 (here computer) plays first by setting a multi-digit number.
        Player 2 now tries his first attempt at guessing the number.
        If Player 2 succeeds in his first attempt (despite odds which are highly unlikely) he wins the game and is crowned Mastermind! 
        If not, then Player 1 hints by revealing which digits or numbers Player 2 got correct.
        The game continues till Player 2 eventually is able to guess the number entirely.
        The number of tries is 10
      '''
print(gamerules())
    
import random as rd
import os
import math
import time
n=int(input("Enter the number of digits of number which you want to guess "))
num_of_guess=int(input("Enter the number of guesses you want to guess. I can't give more than 10 guesses "))
while(num_of_guess>10):
    print("Wanna cheat? Try again Asking for THESE MANY guesses ")
    num_of_guess=int(input("Enter the number of guesses you want to guess "))
while(num_of_guess<=0):
    cont=input("Do you want to exit the game Y/N")
    if cont== 'Y' or cont== 'y' or cont== 'yes' or cont== 'YES' or cont== 'Yes':
        os._exit()
    else:
        num_of_guess=int(input("Enter the number of guesses you want to guess. I can't give more than 10 guesses "))
    
randomNumber=rd.randint(10**(n-1),10**n-1)#random number to be guessed
guessed=None
def convertNumberToList(number):#convert number to list 
    LstNumber=list(str(number))
    return LstNumber
randomNumberList=convertNumberToList(randomNumber)
def numofdigits(number):
    return int(math.log10(number))+1
def MasterMind(randomNumberList,guessed,num_of_guess,firstguess):
    isCorrectGuessed=False
    listisGuessed=[]#stores list of all numbers guessed so far
    while(num_of_guess>0 and (isCorrectGuessed ==False)):
        guessed=int(input("Enter your guess"))#user guess
        if numofdigits(guessed)!=len(randomNumberList):#number of digits are not same as input by the user earlier
            print(f"You are playing with a 4 digit number but have entered a number with {len(randomNumberList)} digits")
        else:
            list_guessed=convertNumberToList(guessed)
            if guessed in listisGuessed:#if user already guessed the number
                print(f'You have already guessed the number {guessed} ')
            else:
                newlst=["X" for i in range(len(randomNumberList))]#create a list with 'X' of size <len(randomNumberList)>
                listisGuessed.append(guessed)#storing the guessed number
                for i in range(len(randomNumberList)):
                    if randomNumberList[i] in list_guessed:
                        newlst[i]=randomNumberList[i]#adding the number at the position which is correct
                num_of_guess-=1
                if num_of_guess==firstguess and(isCorrectGuessed ==False):
                    print(f'You have guessed {newlst}\n You have {num_of_guess} guesses left. \n Give another try')
                    print('As this is your first guess I am not erasing the screen. From the next time screen will be erased.')
                elif num_of_guess > 1:
                    print(f'You have guessed {newlst}\n You have {num_of_guess} guesses left. \n Give another try')
                    print('The screen will be cleared to avoid cheating within 2 seconds.')
                    time.sleep(2)
                    os.system('cls')
                if randomNumberList==list_guessed:#if the number guessed is correct
                    isCorrectGuessed=True
                    print(f'You have guessed the number in {num_of_guess} guesses. You are a mastermind.')
                    return True
                # guessed=0
                list_guessed=[] #making list of guessed number as empty list
            if (num_of_guess==1):#Alert for last guess
                print(f'This is your last guess.')
print(randomNumber)
if MasterMind(randomNumberList,guessed,num_of_guess,num_of_guess): #if user guessed the number          
    print(f'You have guessed the number {randomNumber}')
else: #if user failed to guess the number
    print(f'You didn\'t guess the number. It was: {randomNumber}')
