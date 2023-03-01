#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
      char x[200],y[200];
    scanf("%s",x);
    scanf("%s",y);
    // int n1=sizeof(x);//gives 200
    int nx=strlen(x);
    int ny=strlen(y);
    char x3[200];
    int st=0;
    // int n1=sizeof(x)/sizeof(x[0]); gives 200
    for (int i = 0; i < nx; i++)
    {   int c=1;
        for (int j = 0; j < ny; j++)
        {
            if(x[i]==y[j])
                c=0;
                break;
        }
        if(c){
            x3[st++]=x[i];
        }
        x3[st]='\0';
        printf("%s",x3);
        
    }
    
return 0;
}