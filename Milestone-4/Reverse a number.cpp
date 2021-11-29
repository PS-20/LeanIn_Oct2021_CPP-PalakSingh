#include<iostream>
using namespace std;

void reverse(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<"Reversed number : "<<sum;
}

int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	reverse(n);
	return 0;
}

/* OUTPUT
Enter a number : 1456
Reversed number : 6541   */
