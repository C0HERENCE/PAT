#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	vector<int> circle(n);
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		circle[i]=sum+temp;
		sum = circle[i];
	}
	int m;
	cin >> m;
	for (int i=0;i<m;i++)
	{
		int start,end;
		cin>>start>>end;
		if(start>end) swap(start,end);
		int distA=circle[end-2]-circle[start-1];
		int distB=sum-distA;
		printf("%d\n",min(distA,distB));
	}
} 
