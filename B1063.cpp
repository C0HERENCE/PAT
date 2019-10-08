#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int max=0;
	for (int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >>y;
		if (x*x+y*y > max)
		{
			max = x*x + y*y;
		}
	}
	printf("%.2f",sqrt(max*1.0));
}
