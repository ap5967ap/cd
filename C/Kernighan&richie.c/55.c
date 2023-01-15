#include <stdio.h>
#include <math.h>


int main(){
    int c,i,nwhite,nother,ndigit[10];
    for ( i = 0 ;i < 10 ;i++)
    {
        /* code */
        ndigit[i]=0;


    }
    while ((c==getchar()) != -1)
    {
        switch (c)
        {
        case '0': case '1': case '2' : case '3': case '4': 
        case '5' : case '6' : case '7':case '8':case'9':ndigit[c-'0']++;
        break;
        case ' ':
        case '\n':
        case 't':
            nwhite++;
            break;
        
        default:
            nother++;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", ndigit[i]);
    }
    
    printf("%d %d", nwhite, nother);
return 0;
}
