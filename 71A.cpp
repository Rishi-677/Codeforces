#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() < 11)
			cout << s << endl;
		else
			cout << s.substr(0, 1) << s.length() - 2 << s.substr(s.length() - 1, 1) << endl;
	}
	return 0;
}