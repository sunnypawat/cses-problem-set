#include <iostream>
using namespace std;

#define ll long long

int main() {
    ll n, prv, ans = 0;
    cin >> n;
    cin >> prv;
    for (ll i=1; i<n; i++){
       ll cur;
       cin >> cur;
       if (cur <= prv) ans += prv - cur;
       else prv = cur;
    }
    cout << ans;
}
