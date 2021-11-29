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
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"Largest element : "<<a[0]<<endl;
	cout<<"Second largest element : "<<a[1];
	return 0;
}

/* OUTPUT
Enter the size of array : 5
Enter the elements :
3 4 9 2 1
Largest element : 9
Second largest element : 4   */
