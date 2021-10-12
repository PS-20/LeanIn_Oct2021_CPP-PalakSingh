#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 numbers : "<<endl;
	cin>>a>>b;
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
Enter 2 numbers :
10
20
Before Swapping
a = 10 & b = 20
After Swapping
a = 20 & b = 10*/
