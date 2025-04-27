#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, mx = INT_MIN, mn = INT_MAX, maxind, minind;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        if(mx == mn)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl << mx << " " << mn << " ";
            for(int i = 0; i < n; i++) {
                if(a[i] == mx)
                    maxind = i;
                if(a[i] == mn)
                    minind = i;
            }
            for(int i = 0; i < n; i++) {
                if(i == maxind || i == minind)
                    continue;
                else
                    cout << a[i] << " ";
            }
            cout << endl;

        }

    }

}
