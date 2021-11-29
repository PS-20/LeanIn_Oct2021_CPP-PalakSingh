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
	
	for(int i=1;i<n;i++)
	{
		int current=a[i];
		int j=i-1;
		while(a[j]>current && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
	
	cout<<"Sorted Array : \n";
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
    return 0;
}

/* OUTPUT 
Enter the size of array : 5
Enter the elements :
9 2 4 1 5
Sorted Array :
1 2 4 5 9   */
