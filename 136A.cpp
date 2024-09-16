#import<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,q;
	cin >> n;
	vector <int> ans(n+1,0);
	for (int i = 1; i <= n; i++)
	{
		cin >> q;
		ans[q] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i]<<" ";
	return 0; 
}