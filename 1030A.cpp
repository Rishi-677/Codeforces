#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
			x = 1;
	}
	if (x==1) 
		cout << "HARD";
	else 
		cout << "EASY";
	return 0;
}