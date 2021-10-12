#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter dividend : ";
	cin>>a;
	cout<<"Enter divisor : ";
	cin>>b;
	
	int q=a/b;
	int r=a%b;
	
	cout<<"Quotient = "<<q<<endl;
	cout<<"Remainder = "<<r;
	
	return 0;
}

/* OUTPUT
Enter dividend : 25
Enter divisor : 5
Quotient = 5
Remainder = 0 */
