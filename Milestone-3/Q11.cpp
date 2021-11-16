#include<iostream>
using namespace std;

void linearsearch(int n,int a[],int key)
{
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element found at position "<<i+1;
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
	int a[5]={1,5,7,9,3};
	cout<<"Given array : \n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	int key;
	cout<<"\nElement to be searched : ";
	cin>>key;
	linearsearch(5,a,key);
	
	return 0;
}

/* OUTPUT
Given array :
1 5 7 9 3
Element to be searched : 9
Element found at position 4   */
