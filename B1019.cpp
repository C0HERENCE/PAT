#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n%1111==0)
	{
		printf("%04d - %04d = %04d\n",n,n,n-n);
		return 0;
	}
	do
	{
		vector<int> digits(4);
		int i=0;
		for (int i=0;i<4;i++)
		{
			digits[i] = n%10;
			n/=10;
		}
		sort(digits.begin(),digits.end(),greater<int>());
		int num1 = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
		int num2 = digits[3] * 1000 + digits[2] * 100 + digits[1] * 10 + digits[0];
		n = num1 - num2;
		printf("%04d - %04d = %04d\n",num1,num2,n);
	}
	while (n!=6174);
}
