#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		long long A,B,C;
		cin>>A>>B>>C;
		cout<<"Case #" << i+1 << ": " << ((A+B>C)?"true":"false") << endl;
	}
}
