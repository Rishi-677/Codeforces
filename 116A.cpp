#import <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int entry[n];
int exit[n];
for (int i = 0; i < n; i++)
{
	cin >> exit[i] >> entry[i];
}
int max = 0;
for (int i = 1; i < n; i++)
{
	int sum = 0;
	for (int j = 0; j < i; j++)
	{
		sum += entry[j] - exit[j];
	}
	if (sum > max)
		max = sum;
}
cout << max;
return 0;
}
