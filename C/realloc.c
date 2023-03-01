#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_array(int *ar, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int i;
    int *grades=NULL;
    int totalGrades;
    scanf("%d",&totalGrades);
    grades=(int *)malloc(sizeof(int)*totalGrades);
    for (int i = 0; i < totalGrades; i++)
    {
        scanf("%d",&grades[i]);
    }
    print_array(grades,totalGrades);
    totalGrades=totalGrades+2;
    // grades=(int *)realloc(grades,totalGrades); it should be avoided as intial data is wiped out
    int *temp=NULL;
    temp=(int *)realloc(grades,totalGrades);
    scanf("%d%d",&temp[totalGrades-2],&temp[totalGrades-1]);
    grades=temp;
    print_array(grades,totalGrades);
    //we can use it to reduce size also
    totalGrades=totalGrades-3;
    temp=(int *)realloc(grades,totalGrades);
    grades=temp;
    print_array(grades,totalGrades);
return 0;
}