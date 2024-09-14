#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    int x = 0;
    for(;n>0;n=n/10)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count += 1;
    }
    if (count == 0)
        cout << "NO";
    else
    {
        for (; count > 0; count = count / 10)
        {
            if (!(count % 10 == 4 || count % 10 == 7))
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}