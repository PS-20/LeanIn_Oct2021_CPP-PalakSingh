#include<iostream>
using namespace std;

void traverse(int n, int a[])
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void linearsearch(int n,int a[])
{
	bool flag=0;
	int key;
	cout<<"\nEnter the element to be found : ";
	cin>>key;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==key)
		{
			cout<<"\nElement found at position "<<i;
			flag =1;
			break;
		}
	
	}
	if(flag==0)
	{
		cout<<"Element not found!";
	}
}

void modify(int n,int a[])
{
	int p,v;
	cout<<"\nEnter the position to be updated : ";
	cin>>p;
	cout<<"\nEnter the new value : ";
	cin>>v;
	for(int i=1;i<=n;i++)
	{
		if(i==p)
		{
			a[i]=v;
		}
	}
	cout<<"Array after modification : \n";
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n,c;
	cout<<"Enter the size of array : \n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array : \n";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	do
	{
	    cout<<"\nMENU\n";
	    cout<<"Enter your choice : \n";
	    cout<<"1 : Traverse the array\n";
	    cout<<"2 : Search an element\n";
    	cout<<"3 : Modify an element\n";
    	cout<<"4 : Exit\n\n";
    	cin>>c;
	
		switch(c)
		{
			case 1 : traverse(n,a);
			break;
			case 2 : linearsearch(n,a);
			break;
			case 3 : modify(n,a);
			break;
			default : cout<<"Invalid choice!";				
		}
	}
	while(c<4);
	
	return 0;	
}

/* OUTPUT
Enter the size of array :
6
Enter the elements of array :
1 7 9 6 2 5

MENU
Enter your choice :
1 : Traverse the array
2 : Search an element
3 : Modify an element
4 : Exit

3

Enter the position to be updated : 4

Enter the new value : 3
Array after modification :
1 7 9 3 2 5   */

