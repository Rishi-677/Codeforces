#include<iostream>
using namespace std;
int main()
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	cout << endl;
	int arr[n];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			if (arr[i] >= arr[(k - 1)])
				x = x + 1;
		}
	}
	cout << x;
	return 0;
}