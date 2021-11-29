#include<iostream>
using namespace std;
int main()
{
	int n,p,e;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n+1];
	cout<<"Enter the elements : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter position to insert new element : ";
	cin>>p;
	cout<<"Enter element : ";
	cin>>e;
	for(int i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
    	a[p]=e;
	cout<<"New array : \n";
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}

/* 	OUTPUT
Enter the size of array : 4
Enter the elements :
1 4 7 9
Enter position to insert new element : 2
Enter element : 5
New array :
1 4 5 7 9   */
