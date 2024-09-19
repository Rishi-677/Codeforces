#include<iostream>
using namespace std;
int main()
{
	int k, r, n = 1;
	cin >> k >> r;
	while (true)
	{
		if ((n * k) % 10 == r || (n*k)%10==0)
		{
			cout << n;
			break;
		}
		n = n + 1;
	}
	return 0;
}