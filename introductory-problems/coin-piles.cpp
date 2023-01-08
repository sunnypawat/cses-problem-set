#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n = 0;
    cin >> n;
    while (n--){
        int l, r;
        cin >> l >> r;
        if (l < r) 
            swap(l, r);
        if (l > 2*r) {
            cout << "NO\n";
            continue;
        }
        if ((l+r)%3==0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
