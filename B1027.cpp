#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int lines = sqrt((n+1)/2);
	for (int i=lines;i!=0;i--)
	{
		for (int j=0;j<lines-i;j++)
			printf(" ");
		for (int j=0;j<2*i-1;j++)
			printf("%c",c);
		printf("\n");
	}
	for (int i=1;i<lines;i++)
	{
		for (int j=0;j<(lines-i-1);j++)
			printf(" ");
		for (int j=0;j<i*2+1;j++)
			printf("%c",c);
		printf("\n");
	}
	printf("%d\n",n-lines*lines*2+1);
}
