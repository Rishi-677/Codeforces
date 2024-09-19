#include<iostream>
using namespace std;
int main()
{
	int n,police=0,crime=0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == -1)
		{
			if (police > 0)
				police -= 1;
			else
				crime += 1;
		}
		else
			police += arr[i];
	}
	cout << crime;
	return 0;
}