#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	int n,p,q;
	cin >> n;
	cin >> p;
	unordered_set<int>ans;
	for (int i = 0; i < p; i++)
	{
		int a;
		cin >> a;
		ans.insert(a);
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int a;
		cin >> a;
		ans.insert(a);
	}
	if (ans.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
	return 0;
}
