#include <vector>
#include <iostream>

using namespace std;


vector<double> seq;
vector<bool> visited;
vector<double> sums;

void dfs(int index,int nowK,int k,int n);

int main()
{
	int n;
    cin >> n;
    seq.resize(n);
    visited.resize(n,false);
    for (int i=0;i<n;i++)
        cin >> seq[i];
    for (int i=1;i<=n;i++)
    	dfs(0,0,i,n);
    double sum = 0;
    for (auto i:sums)
    {
    	cout << i << endl;
    	sum += i;
	}
	printf("%.2f",sum);
    return 0;
}

void dfs(int index,int nowK,int k,int n)
{
    if (nowK==k)
    {
    	double sum=0;
        for (int i = 0; i < visited.size(); i++)
            if (visited[i]) 
            {
            	cout << seq[i];
				sum += seq[i];
			}
		cout << endl;
		sums.push_back(sum);
        return;
    }
    if (index==n||nowK>k)
    {
        return;
    }
    
    visited[index] = true;
    dfs(index+1,nowK+1,k,n);
    visited[index] = false;
    dfs(index+1,nowK,k,n);
}
