#include<iostream>
using namespace std;
int main()
{
	int n=6, coef=1;
	for(int i=0;i<n;i++)
	{
		for(int space=0;space<n-i;space++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			if(i==0 || j==0)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
			}
			cout<<coef<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/* OUTPUT 
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1    */
