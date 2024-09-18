#include<iostream>
#include<vector>
using namespace std;
vector<int> home;
vector <int> away;
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int b, a;
        cin >> a >>  b;
        home.push_back(a);
        away.push_back(b);
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (home[i] == away[j])
                x++;
    }
    cout << x;
    return 0;
}