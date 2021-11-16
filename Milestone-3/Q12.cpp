#include<iostream>
using namespace std;
int main()
{
	int a[3][3][3];
	cout<<"Enter elements : \n";
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=3;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"Required 3D Matrix : \n";
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=3;k++)
			{
				cout<<a[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

/* OUTPUT 
Enter elements :
1 2 3
4 5 6
7 8 9

7 4 1
8 5 2
9 6 3

3 2 1
6 5 4
9 8 7
Required 3D Matrix :
1 2 3
4 5 6
7 8 9

7 4 1
8 5 2
9 6 3

1 3 4
5 4 14160816
0 4199400 0     */
