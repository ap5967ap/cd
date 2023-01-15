#include <stdio.h>

int main(){
    char s[6];
    fgets(s,sizeof(s), stdin);//to input a string
    int v=0,c=0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
        else{
            c++;
        }
        
    }
    printf("%d %d %s",c,v,s);

    return 0;
}