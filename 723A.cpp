#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	int sum = arr[0] + arr[1] + arr[2];
	for (int i = arr[0]; i <= arr[2]; i++)
	{
		if (abs(i - arr[0]) + abs(i - arr[1]) + abs(i - arr[2]) < sum)
			sum = abs(i - arr[0]) + abs(i - arr[1]) + abs(i - arr[2]);
	}
	cout << sum;
	return 0;
}