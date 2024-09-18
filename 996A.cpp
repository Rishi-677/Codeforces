#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int a = n / 100;
	int b = (n - 100 * a) / 20;
	int c = (n - 100 * a - 20 * b) / 10;
	int d = (n - 100 * a - 20 * b - 10 * c)/5;
	int e = n - 100 * a - 20 * b - 10 * c - 5 * d;
	cout << a+b+c+d+e ;
	return 0;
}