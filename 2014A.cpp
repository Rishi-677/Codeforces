#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k,tgold=0,ppl=0,gold;
		cin >> n >> k;
		for (int i = 0; i < n; i++) 
		{
			cin >> gold;
			if (gold >= k)
				tgold += gold;
			if (gold == 0 && tgold > 0)
			{
				ppl += 1;
				tgold -= 1;
			}
		}
		cout << ppl<<endl;
	}
	return 0;
}