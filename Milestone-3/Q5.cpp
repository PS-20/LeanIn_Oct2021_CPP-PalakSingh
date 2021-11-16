#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array : ";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Reversed array : ";
	for(int i=n;i>=1;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

/* OUTPUT 
Enter the size of array : 5
Enter the elements of array : 3 7 9 5 1
Reversed array : 1 5 9 7 3  */
