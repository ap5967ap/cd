#include <stdio.h>
#include <math.h>

void pstar(int sp, int st)
    
    {
        if (st==0)
        {
            return;
        }
        
        /* code */
        for (int i = 0; i < sp/2; i++)
        {
            printf(" ");
        }
        for (int i = 0; (i < st) &&(sp%2==0); i++)
        {
            printf("*");
        }
        printf("\n");
        pstar(sp+1,st-1);
    
}
int main(){
    pstar(0,5);
return 0;
}