#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	vector<int> arr;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+')
		{
			arr.push_back(s[i] - '0');
		}
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < (arr.size() - 1); i++)
	{
		cout << arr[i] << "+";
	}
	cout << arr[(arr.size() - 1)];
	return 0;
}