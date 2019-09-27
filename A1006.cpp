#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> digit;
	while (n!=0)
	{
		digit.push_back(n % 10);
		n /= 10;
	}
	while(digit[2])
	{
		cout << "B";
		digit[2]--;
	}
	while(digit[1])
	{
		cout << "S";
		digit[1]--;
	}
	int i=0;
	while (digit[0])
	{
		digit[0]--;
		i++;
		cout << i;
	}
}
