#include <iostream>
using namespace std;
int main()
{
    int n, points;
    cin >> n >> points;
    int min=points, max=points, amazing=0;
    for(int i=1;i<n;i++)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing;
    return 0;
}