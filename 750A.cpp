#include<iostream>
using namespace std;
int main()
{
	int n, k,x=0;
	cin >> n >> k;
	for (int i = 0; i <= n; i++)
	{
		if (k + (5 * i * (i + 1) / 2) > 240)
		{
			cout << i - 1;
			x = 1;
			break;
		}
	}
	if (x == 0)
		cout << n;
	return 0;
}