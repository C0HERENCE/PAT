#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	vector<int> inputs;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;
		inputs.push_back(temp);
	}
	m = (n - m % n);
	rotate(inputs.begin(),inputs.begin()+m,inputs.end());
	for (int i=0;i<n;i++)
	{
		cout << inputs[i];
		if(i!=n-1) cout << " "; else cout << endl;
	}
}
