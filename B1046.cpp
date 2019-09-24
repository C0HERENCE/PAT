#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int A=0,B=0;
	for (int i=0;i<N;i++)
	{
		int A1,A2,B1,B2;
		cin >> A1 >> A2 >> B1 >> B2;
		if(A2==B2)
			continue;
		int c = A1+B1;
		if(c==A2)
			B++;
		if(c==B2)
			A++;
	}
	cout << A << " " << B << endl;
}
