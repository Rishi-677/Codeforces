#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
			x++;
	}
	cout << x;
	return 0;
}