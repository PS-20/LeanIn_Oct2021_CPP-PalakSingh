#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<endl;
	
	cout<<"Postfix increment : ";
	cout<<n++<<endl;
	
	cout<<"Prefix increment : ";
	cout<<++n<<endl;
	
	cout<<"Postfix decrement: ";
	cout<<n--<<endl;
	
	cout<<"Prefix decrement: ";
	cout<<--n;
	
	return 0;
}

/* OUTPUT
Enter a number : 20

Postfix increment : 20
Prefix increment : 22
Postfix decrement: 22
Prefix decrement: 20 */
