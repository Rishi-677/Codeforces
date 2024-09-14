#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int x = 0;
    if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2[s1.length() - i - 1])
                x++;
        }
        if (x == s1.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO";
    return 0;
}