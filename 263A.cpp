#include<iostream>
using namespace std;
int main()
{
	int r1[5];
	int r2[5];
	int r3[5];
	int r4[5];
	int r5[5];
	for (int i = 0; i < 5; i++)
		cin >> r1[i];
	for (int i = 0; i < 5; i++)
		cin >> r2[i];
	for (int i = 0; i < 5; i++)
		cin >> r3[i];
	for (int i = 0; i < 5; i++)
		cin >> r4[i];
	for (int i = 0; i < 5; i++)
		cin >> r5[i];
	for (int i = 0; i < 5; i++)
	{
		if ((r1[i] == 1))
			cout << 2 + abs(i - 2);
		if ((r2[i] == 1))
			cout << 1 + abs(i - 2);
		if ((r3[i] == 1))
			cout << abs(i - 2);
		if ((r4[i] == 1))
			cout << 1 + abs(i - 2);
		if ((r5[i] == 1))
			cout << 2 + abs(i - 2);
	}
	return 0;
}