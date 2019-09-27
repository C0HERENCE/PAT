#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> inputs(n);
    vector<int> coverd;
    vector<int> key;
    for (int i=0; i<n; i++)
    	cin >> inputs[i];
    for (int i=0;i<inputs.size();i++)
    {
    	int temp = inputs[i];
    	while(temp!=1)
        {
            if(temp%2==0)
                temp/=2;
            else 
                temp=(3* temp +1)/2;
            coverd.push_back(temp);
        }
	}
    for (int i=0;i<inputs.size();i++)
		if(find(coverd.begin(),coverd.end(),inputs[i])==coverd.end())
			key.push_back(inputs[i]);
	sort(key.begin(),key.end(),greater<int>());
	for(int i=0;i<key.size();i++)
		if(i==0)
			cout << key[i];
		else
			cout << " " << key[i];
	cout << endl;
}
