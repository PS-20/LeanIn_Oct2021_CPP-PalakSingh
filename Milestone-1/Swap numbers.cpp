#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	cout<<"Before Swapping"<<endl;
	cout<<"a = "<<a<<" & "<<"b = "<<b<<endl;
	
	int temp_variable=a;
	a=b;
	b=temp_variable;
	
	cout<<"After Swapping"<<endl;
	cout<<"a = "<<a<<" & "<<"b = "<<b;	
	
	return 0;
}

/* OUTPUT
Before Swapping
a = 10 & b = 20
After Swapping
a = 20 & b = 10 */
