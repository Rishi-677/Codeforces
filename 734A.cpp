#include <iostream>
using namespace std;
int main()
{
    int n, a=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a = a + 1;
    }
        if (2*a > n)
            cout << "Anton" << endl;
        else if (n > 2*a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    return 0;
}