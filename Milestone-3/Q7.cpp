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
	int sum=0;
	cout<<"Updated array : ";
	for(int i=1;i<=n;i++)
	{
		sum = sum + a[i];
		cout<<sum<<" ";
	}
	return 0;
}

/* OUTPUT
Enter the size of array : 6
Enter the elements of array : 10 20 30 40 50 60
Updated array : 10 30 60 100 150 210 */
