#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int input;
    cin >> input;
    while (true)
    {
        unordered_set <int> dist; 
        int digits = 0;
        int n = input + 1;
        while (n > 0)
        {
            int i = n % 10;
            n = n / 10;
            digits += 1;
            dist.insert(i);
        }
        if (dist.size() == digits)
            break;
        else
            input+=1;
    }
    cout << input+1;
    return 0;
}