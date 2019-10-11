#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,d;
	float e;
	cin >> n >> e >> d;
	float count1=0,count2=0;
	for (int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		int half=k/2 +1;
		bool b1=false;
		for (int j=0;j<k;j++)
		{
			float x;
			cin >> x;
			if (x<e && half>0) 
			{
				half--;
				b1=true;
			}
			if (half==0&&b1==true) 
			{
				if (k>d)
					count2++;
				else
					count1++;
				b1=false;
			}
		}
	}
	printf("%.1f\%% %.1f\%%",count1*100/n,count2*100/n);
}
