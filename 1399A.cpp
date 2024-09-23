#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a,x=0;
		cin >> a;
		int arr[a];
		for (int j = 0; j < a; j++)
		{
			cin >> arr[j];
		}
		sort(arr, arr + a);
		for (int j = 1; j < a; j++)
		{
			if (arr[j] - arr[j - 1] > 1)
			{
				cout << "NO" << endl;
				x = 1;
				break;
			}
		}
		if (x == 0)
			cout << "YES" << endl;
	}
	return 0;
}