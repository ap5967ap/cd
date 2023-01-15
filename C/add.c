#include <stdio.h>
#include <math.h>


int main(){
    char ar[5]="abcd";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = j; k < 5; k++)
            {
                /* code */
                printf("%c",ar[k]);
            }
            printf(" ");
            
        }
        
    }
    
    
return 0;
}