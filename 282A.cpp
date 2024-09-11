#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '+')
			{
				x = x + 1;
				break;
			}
			if (s[j] == '-')
			{
				x = x - 1;
				break;
			}
		}
	}
	cout << x;
	return 0;
}