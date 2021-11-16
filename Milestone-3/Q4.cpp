#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter no. of rows : ";
	cin>>r;
	cout<<"Enter no. of columns : ";
	cin>>c;
	int a[r][c];
	cout<<"Enter elements : \n";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Transpose of given matrix :\n";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/* OUTPUT
Enter no. of rows : 2
Enter no. of columns : 2
Enter elements :
1 5
2 7
Transpose of given matrix :
1 2
5 7  */
