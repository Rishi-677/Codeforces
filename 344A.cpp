#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string mag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mag[i];
    }
    int gp = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (mag[i] != mag[i + 1])
            gp++;
    }
    cout << gp << endl;
    return 0;
}