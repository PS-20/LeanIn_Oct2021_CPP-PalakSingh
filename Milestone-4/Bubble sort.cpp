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
        for(int j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
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
Enter the size of array : 6
Enter the elements :
3 9 5 2 7 4
Sorted Array :
2 3 4 5 7 9   */
