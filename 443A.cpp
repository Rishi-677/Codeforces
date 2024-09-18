#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
int main()
{
    string s;
    unordered_set <char> a;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
            if(int(s[i])>=97 && int(s[i])<=122)
                a.insert(s[i]);
    cout << a.size() << endl;
    return 0;
}