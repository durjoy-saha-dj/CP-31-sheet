#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll dif = d - b;
        if(dif >= 0) {
            if((dif + a) >= c) {
                cout << dif + abs(dif + a - c) << endl;
            }
            else
                cout << -1 << endl;
        }
        else
            cout << -1 << endl;
    }
}
