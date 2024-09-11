#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 1900)
			cout << "Division 1" << endl;
		if (arr[i] >= 1600 && arr[i] < 1900)
			cout << "Division 2" << endl;
		if (arr[i] >= 1400 && arr[i] < 1600)
			cout << "Division 3" << endl;
		if (arr[i] < 1400)
			cout << "Division 4" << endl;
	}

	return 0;
}