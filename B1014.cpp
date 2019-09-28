#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string inputs1,inputs2;
	cin >> inputs1 >> inputs2;
	int first,third;
	char second=0;
	for (int i=0;i<(inputs1.length()<inputs2.length()?inputs1.length():inputs2.length());i++)
		if (inputs1[i]==inputs2[i] && isupper(inputs1[i]))
		{
			first = inputs1[i]-'A'+1;
			break;
		}
	for (int i=0;i<(inputs1.length()<inputs2.length()?inputs1.length():inputs2.length());i++)
		if (inputs1[i]==inputs2[i] && inputs1[i] >='A' && inputs1[i] <= 'N') 
		{
			if(second == -1)
			{
				second = toupper(inputs1[i]);
				break;
			}
			second = -1;
		}
	cin >> inputs1 >> inputs2;
	for (int i=0;i<(inputs1.length()<inputs2.length()?inputs1.length():inputs2.length());i++)
		if (inputs1[i]==inputs2[i]) 
		{
			if(!isalpha(inputs1[i]))
				continue;
			third = i;
			break;
		}
	string ans;
	switch (first)
	{
		case 1:
			ans="MON ";
			break;
		case 2:
			ans="TUE ";
			break;
		case 3:
			ans="WED ";
			break;
		case 4:
			ans="THU ";
			break;
		case 5:
			ans="FRI ";
			break;
		case 6:
			ans="SAT ";
			break;
		case 7:
			ans="SUN ";
			break;
	}
	string temp = "0123456789ABCDEFGHIJKLMN";
	printf("%s%02d:%02d",ans.c_str(),temp.find(second),third);
	
} 
