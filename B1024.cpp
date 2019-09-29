#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string input;
	cin >> input;
	double i = stod(input.substr(0,input.find('E')));
	int n = stoi(input.substr(input.find('E')+1));
	cout.setf
	cout << i * pow(10,n) << endl;
} 
