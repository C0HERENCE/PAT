#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	vector<int> inputs;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		inputs.push_back(tmp);
	}
	float a[5] = {0};
	bool b[5] = {false};
	int count=0;
	int sign=1;
	for (int i=0;i<n;i++)
	{
		if(inputs[i]%5==0&&inputs[i]%2==0)
		{
			b[0]=true;
			a[0]+=inputs[i];
		}
		
		if(inputs[i]%5==1) 
		{
			b[1]=true;
			a[1]+=sign*inputs[i];
			sign*=-1;
		}
		
		if(inputs[i]%5==2) 
		{
			b[2]=true;
			a[2]++;
		}
		
		if(inputs[i]%5==3) 
		{
			b[3]=true;
			a[3]+=inputs[i];
			count++;
		}
		if(inputs[i]%5==4) 
		{
			b[4]=true;
			a[4]=(inputs[i]>a[4])?inputs[i]:a[4];
		}
	}
	a[3] = a[3]/count;
	a[3] = ((int)((a[3]+0.05)*10))/10.0;
	for(int i = 0;i<5;i++)
	{
		if(b[i])
			cout << a[i];
		else
			cout << "N";
		if(i!=4)
			cout << " ";
		else 
			cout << endl;
	}
}
