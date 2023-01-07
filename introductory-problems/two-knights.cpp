#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    long long int n;
    cin >> n;
    if (n >= 1) 
        cout << 0 << "\n";
    if (n >= 2) {
       cout << 6 << "\n"; 
    }
    for(long long int i=3; i<=n; i++) {
        ll a1 = i*i * (i*i-1) / 2;
        ll a2 = 8 * (i-2)*(i-1)/2;
        cout << a1 - a2 << "\n";
    }
}