#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isOdd(ll n) {
    if(n % 2 == 0)
        return false;
    else
        return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, ans = 0;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 1; i < n; i++) {
            if(isOdd(a[i - 1]) == isOdd(a[i])) {
                ans++;
            }
        }

        cout << ans << endl;
    }
}
