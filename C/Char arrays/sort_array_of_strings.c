// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include<string.h>

// int main(){
//     char *a[]={"HELLO","ADITYA","FUNC","FREE","JAIL"};
//     int n=sizeof(a)/sizeof(a[0]);//sizeof array
//     // strlen(a); gives wrong
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (strcmp(a[i],a[j])>0)
//             {
//                 char*s=a[i];
//                 a[i]=a[j];
//                 a[j]=s;
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%s ",a[i]);
//         printf("\n");
//     }
    
// return 0;
// }
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char a[5][7]={"HELLO","ADITYA","FUNC","FREE","JAIL"};//array of strings
    int n=sizeof(a)/sizeof(a[0]);//sizeof array
    // strlen(a); gives wrong
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
                char s[20];
                char x[20];
                memcpy(x,a[j],sizeof(a[j]));
                memcpy(s,a[i],sizeof(a[i]));
                memcpy(a[i],x,sizeof(a[i]));
                memcpy(a[j],s,sizeof(a[j]));
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ",a[i]);
        printf("\n");
    }
    
return 0;
}