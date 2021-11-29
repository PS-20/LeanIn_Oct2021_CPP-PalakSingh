#include<iostream>
using namespace std;

void palindrome(int n)
{
	int m=n;
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==m)
	{
		cout<<m<<" is a palindrome";
	}
	else
	{
		cout<<m<<" is not a palindrome";
	}
	
}

int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	palindrome(n);
	return 0;
}

/* OUTPUT
Enter a number : 121
121 is a palindrome  */
