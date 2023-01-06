#include <iostream>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        ll x, y, ans = 0;
        cin >> y >> x;
        if (x >= y){
            if (x%2 == 1) ans = x*x-y+1;
            else ans = (x-1)*(x-1)+y;
        }else{
            if (y%2 == 0) ans = y*y-x+1;
            else ans = (y-1)*(y-1)+x;
        }
        cout << ans << "\n";
    }
}
