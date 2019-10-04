#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string inputs;
	getline(cin,inputs);
	int sum=0;
	for (char c:inputs)
		if (isalpha(c)) 
			sum += toupper(c)-'A'+1;
	int count0=0;
	int count1=0;
	while (sum)
	{
		if (sum%2)
			count1++;
		else
			count0++;
		sum/=2;
	}
	cout << count0 << " " << count1 << endl;
}
