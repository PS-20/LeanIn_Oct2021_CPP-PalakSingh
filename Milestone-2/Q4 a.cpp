#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<char(i+64)<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*OUTPUT
A
B B
C C C
D D D D
E E E E E */

