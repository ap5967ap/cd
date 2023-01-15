#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int *arr;
	int n;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
return 0;
}