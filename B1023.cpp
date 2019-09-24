#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	vector<int> inputs;
	for (int i=0; i<10; i++)
		{
			int temp;
			cin >> temp;
			for (int j = 0; j<temp; j++)
				{
					inputs.push_back(i);
				}
		}

	sort(inputs.begin(),inputs.end());
	if(inputs[0]==0)
		{
			int i = count(inputs.begin(),inputs.end(),0);
			rotate(inputs.begin(),inputs.begin()+i,inputs.begin()+i+1);
		}
	for(auto i: inputs)
		{
			cout << i;
		}
	cout << endl;
}
