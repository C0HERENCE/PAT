#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> string2vector(string str); 
void print(vector<int>);
vector<int> add(vector<int> a,vector<int> b);
bool ispalindromic(vector<int> arr);

int main()
{
	string n;
	cin >> n;
	
	vector<int> num = string2vector(n);
	if (ispalindromic(num))
	{
		print(num);
		printf(" is a palindromic number.\n");
		return 0;
	}
	int count = 0;
	while(count!=10)
	{
		vector<int> a = num;
		reverse(num.begin(),num.end());
		vector<int> b = num;
		vector<int> c = add(a,b);
		print(a);
		printf(" + ");
		print(b);
		printf(" = ");
		print(c);
		printf("\n");
		if (ispalindromic(c))
		{
			print(c);
			printf(" is a palindromic number.\n");
			return 0;
		}
		num = c;
		count++;
	}
	printf("Not found in 10 iterations.\n");
}

vector<int> string2vector(string str)
{
	vector<int> arr(str.size());
	int i=0;
	for (auto c:str)
	{
		arr[i] = c-'0';
		i++;
	}
	return arr;
}

void print(vector<int> arr)
{
	int pos;
	for (pos =0;pos<arr.size();pos++)
	{
		if (arr[pos]!=0)
			break;
	}
	if (arr.size()==pos)
	{
		printf("0");
		return;
	}
	for (int i=pos;i<arr.size();i++)
	{
		printf("%d",arr[i]);
	}
}

vector<int> add(vector<int> a,vector<int> b)
{
	if (a.size() < b.size())
		swap(a,b);
	
	int size = b.size();
	
	int one = 0;
	vector<int> ans;
	while (b.size() > 0)
	{
		int sum = a.back() + b.back() + one;
		if (sum > 9) one=1; else one=0;
		ans.push_back(sum%10);
		a.pop_back();
		b.pop_back(); 
	}
	while (a.size() > 0)
	{
		ans.push_back(a.back());
		one = 0;
		a.pop_back();
	}
	if (a.size()==0 && one==1)
	{
		ans.push_back(1);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

bool ispalindromic(vector<int> arr)
{
	int i=0;
	int j=arr.size()-1;
	bool flag = true;
	while(i<=j)
	{
		if (arr[i]!=arr[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}
