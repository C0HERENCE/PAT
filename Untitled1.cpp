#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,p;
    cin >> n >> p;
    vector<int> v(n);
    for (int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int count=0;
    for (int i=0;i < v.size()-count;i++)
    {
        int max = v[i]*p;
        auto max_it = upper_bound(v.begin(),v.end(),max)-1;
        if (max_it-(v.begin()+i)>count)
        {
            count = max_it-(v.begin()+i);
        }
    }
    cout << count+1<<endl;
}
