#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct point{
    int x, y;
}point;
int main(){
    int n;
    scanf("%d",&n);
    point *arr=(point *)malloc(sizeof(point)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&(arr[i].x));
        scanf("%d",&(arr[i].y));
    }
    for (int i = 0; i < n; i++)
    {
        printf("(%d , ",arr[i].x);
        printf("%d)\n",arr[i].y);
    }
        
return 0;
}