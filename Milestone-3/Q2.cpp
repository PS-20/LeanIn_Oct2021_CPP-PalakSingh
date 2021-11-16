#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the no. of elements :";
	cin>>n;
	int a[n];
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Sum of the elements present in array : "<<sum;
	return 0;
}

/* OUTPUT
Enter the no. of elements :4
Enter the elements : 1 4 7 9
Sum of the elements present in array : 21   */
