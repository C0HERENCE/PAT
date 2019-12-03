#include <iostream>

int main ()
{
	while(1)
	{
		std::string charpter;
		std::cin >> charpter;
		std::string input;
		std::cin >> input;
		int a,b,c,d;
		sscanf(input.c_str(),"%d-%d£¬%d-%d",&a,&b,&c,&d);
		printf("%d-%d£¬%d-%d\n",a+9,b+9,c+9,d+9);
	}
}
