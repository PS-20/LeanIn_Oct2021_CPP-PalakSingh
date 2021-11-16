#include<iostream>
using namespace std;

void linearsearch(int n,int a[],int key)
{
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element found at position "<<i;
			flag =0;
		}
	
	}
	if(flag==1)
	{
		cout<<"Element not found!";
	}
}

int main()
{
	int n,key;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements : ";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be found : ";
	cin>>key;
	linearsearch(n,a,key);
	return 0;
}

/* OUTPUT 
Enter the size of array : 5
Enter the elements : 1 4 8 9 3
Enter the element to be found : 9
Element found at position 4   */
