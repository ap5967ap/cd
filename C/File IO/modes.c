/*
    r ----Searches file. If the file is opened successfully fopen( ) loads it into memory .
    It sets up a pointer that points to the first character in it. 
    If the file cannot be opened fopen( ) then it returns NULL.
    
    rb ----Open for reading in binary mode. If the file does not exist then fopen( ) will return NULL.

    a ---Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. 
        If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file.

    r+ Searches file. It is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in the file


    a+	Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it.
     If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    FILE *ptr;
    ptr=fopen("ap.txt","r+");
    if (ptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    int x;
    fscanf(ptr,"%d",&x);
    printf("%c",x);
return 0;
}