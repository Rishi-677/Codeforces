#include<iostream>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	for (int i = 0; i < s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}
	for (int i = 0; i < s2.length(); i++)
	{
		s2[i] = tolower(s2[i]);
	}
	int x = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (int(s1[i]) < int(s2[i]))
		{
			cout << -1;
			x = 1;
			break;
		}
		if (int(s1[i]) > int(s2[i]))
		{
			cout << 1;
			x = 1;
			break;
		}
	}
	if (x == 0)
		cout << 0;
	return 0;
}

