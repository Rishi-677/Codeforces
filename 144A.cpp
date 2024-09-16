#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, q,x=0;
	int index_min=0, index_max=0;
	cin >> n;
	vector <int> ans(n);
	for (int i = 0; i < n; i++)
	{
		cin >> q;
		ans[i] = q;
		if (ans[index_min] >= ans[i])
			index_min = i;
		if (ans[index_max] < ans[i])
			index_max = i;
	}
	if (index_min == index_max)
		cout << 0;
	else if (index_min >index_max)
		cout << index_max+n-index_min-1;
	else if (index_min < index_max)
		cout << index_max+n-index_min-2;
	return 0;
}