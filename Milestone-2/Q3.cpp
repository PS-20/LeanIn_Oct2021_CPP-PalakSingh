#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=50;i++)
	{
		if(i%3==0 && i%15!=0)
		{
			cout<<"buzz"<<endl;
		}
		
		else if(i%5==0 && i%15!=0)
		{
			cout<<"fizz"<<endl;
		}
		
		else if(i%15==0)
		{
			cout<<"fizzbuzz"<<endl;
		}
		
		else
		{
			cout<<i<<endl;
		}
	}
	return 0;
}

/* OUTPUT
1
2
buzz
4
fizz
buzz
7
8
buzz
fizz
11
buzz
13
14
fizzbuzz
16
17
buzz
19
fizz
buzz
22
23
buzz
fizz
26
buzz
28
29
fizzbuzz
31
32
buzz
34
fizz
buzz
37
38
buzz
fizz
41
buzz
43
44
fizzbuzz
46
47
buzz
49
fizz  */
