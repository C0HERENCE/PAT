#include <iostream>

using namespace std;

int main()
{
	int m;
	cin >> m;
	for (int i=0;i<m;i++)
	{
		int k;
		cin >> k;
		for (int n=0;n<10;n++)
		{
			int sum=n*k*k;
			int temp=0;
			if (k<10)
			{
				temp=sum%10;
			}
			else if(k<100)
			{
				temp=sum%100;
			}
			else if(k<1000)
			{
				temp=sum%1000;
			}
			if (temp==k)
			{
				cout << n << " " << sum << endl;
				break;
			}
			if (n==9)
			{
				cout << "No" << endl;
			}
		}
	}
}
