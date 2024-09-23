#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, x=0;
        cin >> a >> b >> c >> d;
        if (b > a) 
        {
            x++;
        }
        if (c > a) 
        {
            x++;
        }
        if (d > a) 
        {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}