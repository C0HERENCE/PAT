#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
	int add;
	int data;
	int next;
}; 

int firstadd;
bool isnext(node n)
{
	return n.add==firstadd;
}
int main()
{
	int n,k;
	scanf("%d %d %d",&firstadd,&n,&k);
	vector<node> inputs(n);
	for (int i=0;i<n;i++)
	{
		node nd;
		scanf("%d %d %d",&nd.add,&nd.data,&nd.next);
		inputs[i]=nd; 
	}
	vector<node> sorted(n);
	int count=0;
	for (int i=0;i<n;i++)
	{
		auto it = find_if(inputs.begin(),inputs.end(),isnext);
		firstadd=it->next;
		sorted[i]=*it; 
		count++;
		if(it->next==-1)
			break;
	}
	n=count;
	int chunks=n/k;
	int remain=n%k;
	for (int i=0;i<chunks;i++)
	{
		for (int j=0;j<k;j++)
			if (j>0)
				sorted[i*k + j].next=sorted[i*k + j-1].add;
		if (i>0)
			sorted[(i-1)*k].next=sorted[i*k + k-1].add;
	}
	if (remain==0)
		sorted[(chunks-1)*k].next=-1;
	else
		sorted[(chunks-1)*k].next=sorted[chunks*k].add;
	for (int i=0;i<chunks;i++)
		for (int j=k-1;j>=0;j=j-1)
		{
			printf("%05d %d ",sorted[i*k+j].add,sorted[i*k+j].data);
			if (sorted[i*k+j].next!=-1)
				printf("%05d\n",sorted[i*k+j].next);
			else
				printf("%d\n",sorted[i*k+j].next);
		}
	for (int i=chunks*k;i<n;i++)
	{
		printf("%05d %d ",sorted[i].add,sorted[i].data);
		if (sorted[i].next!=-1)
			printf("%05d\n",sorted[i].next);
		else
			printf("%d\n",sorted[i].next);
	}
}
