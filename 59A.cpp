#include<iostream>
using namespace std;
int main()
{
	string st;
	cin >> st;
	int s = 0;
	int c = 0;
	for (int i = 0; i < st.length(); i++)
	{
		if (islower(st[i]))
			s = s + 1;
		else
			c = c + 1;
	}
	if (s >= c)
		for (int i = 0; i < st.length(); i++)
			st[i]=tolower(st[i]);
	else
		for (int i = 0; i < st.length(); i++)
			st[i]=toupper(st[i]);
	cout << st;
	return 0;
}