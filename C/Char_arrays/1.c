#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char *x="HELLO";//OK
  printf("%s",x++);
  // printf("%s",*x); //This is error
  printf("\nx =%c\n",*x); //OK
  char q[] = "string1"; 
  printf("%c",*q+1);//OK
  // printf("%c", *q++); 
  int ar[]={1,2,3,4,5};
  printf("%d",*ar+1);
  // printf("%d",*ar++); //ERROR
  // int *arr={1,2,3};//ERROR
  int *arr=malloc(4*3);
  for(int i=0;i<3;i++){
    arr[i]=i+1;
  }
  printf("%d",*++arr);//OK
  return 0;
}