#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2,s3;
	vector <char> vec;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	int x = 0;
	string s = s1 + s2;
	for (int i = 0; i < s3.length(); i++)
		vec.push_back(s3[i]);
	if (vec.size() == s.length())
	{
		for (int i = 0; i < s.length(); i++)
		{
			auto val = find(vec.begin(), vec.end(), s[i]);
			if (val != vec.end())
			{
				vec.erase(val);
			}
			else
			{
				cout << "NO";
				x = 1;
				break;
			}
		}
		if (x == 0)
			cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}
