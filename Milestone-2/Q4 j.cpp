#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int k=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<char(k+64)<<" ";
			k++;
		}
		cout<<endl;
	}
	return 0;
}

/* OUTPUT 
A
B C
D E F
G H I J
K L M N O   */

