#include<iostream>
using namespace std;

int binarysearch(int n,int a[],int key)
{
	int s=1,l=n;
	while(s<=l)
	{
		int mid=(s+l)/2;
		if(a[mid]==key)
		{
			cout<<"Element found at position "<<mid;
			return mid;
		}
		else if(a[mid]>key)
		{
			l=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	cout<<"Element not found!";
}
int main()
{
	int n,key;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array : ";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be found : ";
	cin>>key;
	binarysearch(n,a,key);
	return 0;
}

/* OUTPUT 
Enter the size of array : 5
Enter the elements of array : 1 8 9 2 4
Enter the element to be found : 9
Element found at position 3    */
