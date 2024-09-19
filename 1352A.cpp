#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int n,y=0,x=0;
		vector<int> vec;
		cin >> n;
		while (n > 0)
		{
			if (n % 10 != 0)
			{
				x++;
				vec.push_back((n % 10) * pow(10, y));
			}
			y++;
			n = n / 10;
		}
		cout << x << endl;
		for (auto element : vec)
		{
			cout << element << " ";
		}
		cout << endl;
	}
}