#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void add(int a, int b){
    printf("%d",a+b);
}
void sub(int a,int b){
    printf("%d",a-b);
}
void mul(int a,int b){
    printf("%d",a*b);
}
void divs(int a,int b){
    printf("%d",a/b);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    void (*func[])(int,int) ={add,sub,mul,divs};
    int choice;
    scanf("%d",&choice);
    func[choice](a,b);
return 0;
}