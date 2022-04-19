#include<iostream>
using namespace std;

 void MaxMin(int temp[],int size)
 {
 	int max = temp[0];
 	int min = temp[0];
 	for(int i =0;i<size;i++)
 	{
 		if(max<temp[i])
 		{
 			max = temp[i];
		 }
	 }
	 
	 cout<<" \n max elem : " << max <<endl;
	 
	 for(int i =0;i<size;i++)
 	{
 		if(min>temp[i])
 		{
 			min = temp[i];
		 }
	 }
	  cout<<" Min elem :  " << min <<endl;
	 
 }

int main()
{
	int arr[7] = {5,2,9,3,1,-43,0};
	int n = sizeof(arr)/sizeof(int);
	cout<<" The array is : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	MaxMin(arr,n);
	
	
}
