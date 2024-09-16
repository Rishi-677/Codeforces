#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set <long long int> x;
	for (int i = 0; i < 4; i++)
	{
		long long a;
		cin >> a;
		x.insert(a);
	}
	cout << 4 - x.size();
	return 0;
}