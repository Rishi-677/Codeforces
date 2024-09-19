#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a;
    for (int i = 0; i < n; i++) {
        cin >> a;
       a = (a - 1) / 2;
        cout << a<< endl;
    }
    return 0;
}