#include<iostream>
using namespace std;
int main()
{
	long long a, b,c,d;
	cin >> a >> b>>c>>d;
	if (a - b > 0 && a - c > 0 && a - d > 0)
		cout << a - b << " " << a - c << " " << a - d;
	if (b - a > 0 && b - c > 0 && b - d > 0)
		cout << b - a << " " << b - c << " " << b - d;
	if (c - b > 0 && c - a > 0 && c - d > 0)
		cout << c - b << " " << c-a << " " << c - d;
	if (d - b > 0 && d - c > 0 && d - a > 0)
		cout << d - b << " " << d - c << " " << d-a;
	return 0;
}