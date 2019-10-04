#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> inputs(n);
	for (int i=0;i<n;i++)
		cin >> inputs[i];
	int sum=0;
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if (i==j)
				continue;
			sum+= inputs[i]*10 + inputs[j];
		}
	cout << sum << endl;
}
