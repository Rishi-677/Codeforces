#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	unordered_set<int>ans;
	for (int i = 0; i < n; i++)
	{
		s[i] = tolower(s[i]);
		ans.insert(s[i]);
	}
	if (ans.size() == 26)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
