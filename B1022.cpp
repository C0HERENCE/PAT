#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long A,B;
	int D;
	string ans;
	
	cin >> A >> B >> D;
	long long sum = A+B;
	while(sum>0)
	{
		ans = to_string(sum%D) + ans;
		sum /= D;
	}
	if (ans=="") ans="0";
	cout << ans << endl;
	return 0;
}
