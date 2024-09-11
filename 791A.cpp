#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	int n = 1;
	cin >> a >> b;
	while (true)
	{
		if (a * pow(3, n) > b * pow(2, n))
		{
			cout << n;
			break;
		}
		n++;
	}
	return 0;
}