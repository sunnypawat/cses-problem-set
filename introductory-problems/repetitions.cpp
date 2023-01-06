#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c = 'B';
    int n = 0, ans = 1;
    for (char ch : s) {
        if (ch == c) {
            n++;
            ans = max(ans, n);
        } else {
            n = 1;
            c = ch;
        }
    }
    cout << ans;
}
