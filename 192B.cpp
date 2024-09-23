#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double l, gap = 0.0;
	cin >> n >> l;
	vector<double> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n - 1; i++)
		gap = max(vec[i + 1] - vec[i], gap);
	cout << fixed<<setprecision(10)<<max(gap / 2.0, max(vec[0], l - vec[n - 1]));
	return 0;
}