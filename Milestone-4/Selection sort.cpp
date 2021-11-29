#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"Sorted Array : \n";
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
    return 0;
}

/* OUTPUT 
Enter the size of array : 7
Enter the elements :
6 2 4 5 1 3 8
Sorted Array :
1 2 3 4 5 6 8    */
