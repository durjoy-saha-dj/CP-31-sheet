#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        if( ((a + b + 2) <= n) || (a == b && a == n) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}
