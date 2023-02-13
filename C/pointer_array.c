#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int max(int x, int y){
    if(x>y)
        return x;
    else return y;
}
int sum(int *ptr, int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=ptr[i];//this is correct
    }
    return sum;
}
int search_array(int ar[],int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(ar[mid]==x){
            return mid;
        }
        else if(ar[mid]>n){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
    
    
}
int max_index(int ar[],int n){
    int max=0;
    int idx=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>max)
        {
            max=ar[i];
            idx=i;
        }
        
    }
    return idx;
}
int max_value(int arr[], int n){
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
    }
    return mx;
}
int average_value(int arr[], int n){
    return sum(arr,n)/n;
}
int good_neighbors(int arr[], int n){
    int x=max_index(arr,n);
    int sum1=0;
    int sum2=0;
    for (int i = 0; i < x; i++)
    {
        sum1+=arr[i];
    }
    for (int i = x+1; i < n; i++)
    {
        sum2+=arr[i];
    }
    if (sum1==sum2)
    {
        return 1;
    }
    return 0;
}
void print_array(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
int sorted_array(int ar[], int n){//iterative solution
    int sorted=1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>ar[i+1])
        {
            sorted=0;
            break;
        }
        
    }
    return sorted;
}
int sorted_array_recursive(int ar[], int n){//recursive solution
    if (n==0)
    {
        return 1;
    }
    return sorted_array_recursive(ar+1,n-1)&&(ar[0]<ar[1]);
}
int *reverse_array(int *ar, int n){//iterative soln
    int st=0;
    int en=n-1;
    while(st<en){
        int temp=ar[st];
        ar[st]=ar[en];
        ar[en]=temp;
        st++;
        en--;
    }
    return ar;
}

int *reverse_array_recursive(int ar[], int n, int st, int en){//recursive solution
    if (st>en)
    {
        return ar;
    }
    int temp=ar[st];
    ar[st]=ar[en];
    ar[en]=temp;
    return reverse_array_recursive(ar,n,st+1,en-1);
    
}
void frequency_of_each_element_in_array(int *ar, int n){
    int max=max_value(ar,n);
    int hash[max+1];
	for (int i = 0; i < max+1; i++)
    {
        hash[i]=0;
    }
 
	for (int i = 0; i < n; i++) {
		hash[ar[i]]++;
	}

	for (int i = 0; i <= max; i++) {

		if (hash[i] != 0)
			printf("%d -> %d\n", i,hash[i]);
	}

}
int second_largest(int ar[], int n){
    int idx=max_index(ar,n);
    *(ar+idx)=0;
    int max2=max_value(ar,n);
    return max2;

}
int sum_of_two_elements_in_sorted_array(int ar[], int n, int key){
    int st=0, en=n-1;

    while (st<en)
    {   int x= ar[st]+ar[en];
    if(key==x){
        return 1;
    }
    else if(key>x){
        st++;
    }
    else{
        en--;
    }
    }
    return 0;
}
int pallindrome(int ar[], int n){
    if (n==1 || n==0) {
        return 1;
    }
    else{
        return (ar[0]==ar[n-1])&&pallindrome(ar+1,n-2);
    }
}
int sign(int ar[], int n)//return 0 if atleast one of the adjacent elements have same sign else return 1
{
    if(n<=1){
        return 1;
    }
    return (ar[n-1]*ar[n-2]<=0)&&sign(ar+1,n-1);
}
int max_adjacent(int ar[], int n, int *max){
    for (int i = 0; i < n-1; i++)
    {
        if (ar[i]+ar[i+1]>*max) 
        {
            *max=ar[i]+ar[i+1];
        }
        
    }
    return *max;

    
}
int max_adjacent_recur(int ar[], int n){
    int currsum = 0;
    int maxsumsofar = 0;
    if (n==2)
    {
        return ar[0]+ar[1];
    }
    currsum=ar[0]+ar[1];
    maxsumsofar=max_adjacent_recur(ar+1,n-1);
    if (maxsumsofar>currsum)
    {
       return maxsumsofar;
    }
    return currsum;
}
int check(double ar[], int n){//(left_int < right_int) and (left_fraction> right_fraction) return 1 else return 0;
    if (n<=1)
    {
        return 1;
    }
    else return((((int)ar[0]<=(int)ar[1]) && ((ar[0]-(int)(ar[0]))>=ar[1]-(int)(ar[1])))) && check(ar+1,n-1);

}
int binary(int n){
    if (n==1 || n==0) 
    {
        return 1;
    }
    else
        {
            return (n%2+10*binary(n/2));
        }
}
int main(){
    int n;
   scanf("%d", &n);
    int key=0;
   scanf("%d", &key);//int scanf
    int arr[n];
     for (int i = 0; i < n; i++)
     {
         scanf("%lf", &arr[i]);
     }
    printf("%d",max_adjacent_recur(arr,n));

return 0;
}
