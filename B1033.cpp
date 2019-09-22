#include<set>    
#include<iostream>    
#include<cctype>
using namespace std;

int main()
{
	string brokenKey;
	getline(cin,brokenKey);
	set<char> s;

	for (int i = 0; i < brokenKey.length(); i++)
	{
		if (isupper(brokenKey[i]))
		{
			s.insert(brokenKey[i]);
			s.insert(tolower(brokenKey[i]));
		}
		else
		{
			s.insert(brokenKey[i]);
		}
	}

	string sentence;
	getline(cin,sentence);
	string answer = "";
	bool isShiftBroken = false;
	if (s.find('+') != s.end()) isShiftBroken = true;
	for (int i = 0; i < sentence.length(); i++)
	{
		char currentChar = sentence[i];
		if (isShiftBroken)
			if (currentChar >= 'A' && currentChar <= 'Z')
				continue;
		if (s.find(currentChar) != s.end())
			continue;
		answer += sentence[i];
	}
	cout << answer;
	return 0;
}
