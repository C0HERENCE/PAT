#include <iostream>
#include <cmath>

using namespace std;
const int CLK_TCK = 100;
int main()
{
	int C1,C2;
	cin>>C1>>C2;
	int seconds = (int)round((C2-C1)*1.0/CLK_TCK);
	int ans[3]={0};
	int i=2;
	while(seconds>0)
	{
		ans[i] = seconds%60;
		seconds /=60;
		i--;
	}
	printf("%02d:%02d:%02d",ans[0],ans[1],ans[2]);
}
