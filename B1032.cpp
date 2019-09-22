#include <iostream>
#include <map>

using namespace std;
int main()
{
    int n=0;
    map<int,int> inputs;
    int max=0,maxn=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        inputs[a]+=b;
        if(inputs[a]>max)
        {
            max=inputs[a];
            maxn=a;
        }
    }
    cout<<maxn<<" "<<max<<endl;
    return 0;
}

