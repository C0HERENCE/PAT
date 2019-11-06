#include <vector>
#include <iostream>

using namespace std;


vector<int> seq;
vector<bool> visited;

void dfs(int index,int nowK,int k,int n);

int main()
{
	int n;
    cin >> n;
    seq.resize(n);
    visited.resize(n,false);
    for (int i=0;i<n;i++)
        cin >> seq[i];
    int count;
    cin >> count; 
    dfs(0,0,count,n);
    return 0;
}

void dfs(int index,int nowK,int k,int n)
{
    if (nowK==k)
    {
        for (int i = 0; i < visited.size(); i++)
            if (visited[i]) 
				cout << seq[i] << " ";
        cout << endl;
        return; // ·µ»Ø 
    }
    if (index==n||nowK>k)
    {
        return;
    }
    
    dfs(index+1,nowK+1,k,n);
    visited[index] = false;
    dfs(index+1,nowK,k,n);
}
