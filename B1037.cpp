#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a,b;
	string input;
	cin>>input;
	a = input.find('.');
	b = input.find('.',a+1);
	int galleon1 = stoi(input.substr(0,a));
	int sickle1 = stoi(input.substr(a+1,b-a));
	int kunt1 = stoi(input.substr(b+1));
	
	cin>>input;
	a = input.find('.');
	b = input.find('.',a+1);
	int galleon2 = stoi(input.substr(0,a));
	int sickle2 = stoi(input.substr(a+1,b-a));
	int kunt2 = stoi(input.substr(b+1));
	
	int total1 = galleon1 * 17 * 29 + sickle1 * 29 + kunt1;
	int total2 = galleon2 * 17 * 29 + sickle2 * 29 + kunt2;
	
	int total = total2 - total1;
	bool isneg;
	isneg=total<0?true:false;
	if (isneg) total *=-1;
	
	int galleon = total / (17*29);
	total -= galleon * 17 * 29;
	int sickle = total / 29;
	total -= sickle * 29;
	int kunt = total;
	if (isneg) galleon *=-1;
	cout << galleon << ".";
	cout << sickle << ".";
	cout << kunt << endl;
}
