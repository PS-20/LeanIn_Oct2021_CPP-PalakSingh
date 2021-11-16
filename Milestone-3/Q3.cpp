#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter no. of rows : ";
	cin>>r;
	cout<<"Enter no. of columns : ";
	cin>>c;
	int a[r][c], b[r][c], sum[r][c];
	cout<<"Enter elements of MATRIX 1 :\n";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of MATRIX 2 :\n";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Sum of given matrices : \n";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
/* OUTPUT
Enter no. of rows : 2
Enter no. of columns : 2
Enter elements of MATRIX 1 :
1 4
5 3
Enter elements of MATRIX 2 :
6 3
2 4
Sum of given matrices :
7 7
7 7  */
