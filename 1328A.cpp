#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr1[2*n];
	int arr2[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i] >> arr1[i + n];
		if (arr1[i] % arr1[i + n] == 0)
			arr2[i] = 0;
		else
			arr2[i] = arr1[i + n] - arr1[i] % arr1[i + n];
	}
	for (int i = 0; i < n; i++)
		cout << arr2[i] << endl;
	return 0;
}