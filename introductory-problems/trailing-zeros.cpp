#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main(){
    lli n;
    int z = 0;
    cin >> n;
    while (n >= 5){
        z += floor(n/5);
        n = floor(n/5);
    }
    cout << z;
}
