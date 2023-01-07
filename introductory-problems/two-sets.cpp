#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

int main(){
    int n;
    cin >> n;
    if(n*(n+1)/2%2){
        cout << "NO\n";
        return 0;
    }
    vector<int> v1, v2;
    if (n%4 == 0){
        for(int i=n; i>=1; i-=4){
            v1.push_back(i);
            v2.push_back(i-1);
            v2.push_back(i-2);
            v1.push_back(i-3);
        }
    }else if(n%4 == 3){
        for(int i=n; i>=4; i-=4){
            v1.push_back(i);
            v2.push_back(i-1);
            v2.push_back(i-2);
            v1.push_back(i-3);
        }
        v1.push_back(3);
        v2.push_back(2);
        v2.push_back(1);
    } else {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    cout << v1.size() << "\n";
    for (int i : v1){
        cout << i << " ";
    }
    cout << "\n" << v2.size() << "\n";
    for (int i : v2){
        cout << i << " ";
    }    
}
