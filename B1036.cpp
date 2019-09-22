#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;
	string rowa,rowb;
	for(int i=0;i<n;i++)
		rowa+=c;
	for(int i=0;i<n-2;i++)
		rowb+=' ';
	rowb=c+rowb+c;
	cout<<rowa<<endl;
	for(int i=0;i<round(n/2.0)-2;i++)
		cout<<rowb<<endl;
	cout<<rowa<<endl;
	return 0;
} 
