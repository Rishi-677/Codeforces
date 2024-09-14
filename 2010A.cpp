#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ans[n];
	for (int i = 0; i < n; i++)
	{
		int a;
		cin>>a;
		int arr[a];
		int sum = 0;
		for (int j = 0; j < a; j++)
		{
			cin >> arr[j];
			sum = sum + arr[j] * pow(-1, j);
		}
		ans[i]=sum;
	}
	for (int i = 0; i < n; i++)
		cout << ans[i]<<endl;
	return 0;
}