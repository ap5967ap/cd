#include <iostream>
using namespace std;

int main(){
	//count sort
	//1.count the number of distinct elements
	//2.size is the maximum of main array
	//3.in the count array we set values as count[i] = the number of times i is present in main array
	//4.modify count array to cumulative count array by count[i]= sum of all count from i=0 to i
	//5.Traverse from last element to first and save value of arr[i] to new_arr[count[arr[i]]] and decrease
	//the value of count[i] by 1
	int n;
	cin>>n;
	int ar[n],nwar[n];
	for (int i = 0; i < n; i++)
	{
		cin>>ar[i];
		nwar[i]=0;
	}
	
	int x=INT16_MIN;
	for (int i = 0; i < n; i++)
	{
		x=max(x,ar[i]);
	}
	
	int c[x];	

	for (int i = 0; i < x; i++)
	{
		c[i]=0;
		
	}
	
	for (int i = 0; i < n; i++)
	{
		c[ar[i]-1]++;
	}
	
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum=sum+c[i];
		c[i]=sum;
	}
	// for (int i = 0; i < x; i++)
	// {
	// 	cout<<c[i]<<" ";
	// }

	for (int i = n-1; i >=0	; i--)
	{
		nwar[c[ar[i]-1]]=ar[i];
		c[ar[i]-1]--;
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<nwar[i+1]<<" ";
	// }
	for (int i = 0; i < n; i++)
	{
		ar[i]=nwar[i+1];
	}
	for (int i = 0; i < n; i++)
	{
		cout<<ar[i]<<" ";
	}
	 
	return 0;
}