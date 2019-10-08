#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> lengths(n);
	for (int i=0;i<n;i++)
	{
		cin >> lengths[i];
	}
	sort(lengths.begin(),lengths.end());
	double length=lengths[0];
	for (int i=1;i<n;i++)
	{
		length = (length + lengths[i])/2;
	}
	cout << (int)length << endl;
}
