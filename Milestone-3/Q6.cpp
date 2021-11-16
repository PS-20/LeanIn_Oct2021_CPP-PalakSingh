#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the size of array 1 : ";
	cin>>n;
	cout<<"Enter the size of array 2 : ";
	cin>>m;
	int a[n],b[m];
	cout<<"Enter elements of array 1 : ";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter elements of array 2 : ";
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	int k=n+m;
	int c[k];
	for(int i=1;i<=n;i++)
	{
		c[i]=a[i];
	}
	for(int i=1,j=n+1;i<=m,j<=k;i++,j++)
	{
		c[j]=b[i];
	}
	cout<<"Merged array : ";
	for(int i=1;i<=k;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
/* OUTPUT
Enter the size of array 1 : 4
Enter the size of array 2 : 5
Enter elements of array 1 : 1 4 7 8
Enter elements of array 2 : 2 5 8 3 9
Merged array : 1 4 7 8 2 5 8 3 9   */
