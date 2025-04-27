#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int flag = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(__gcd(a[i], a[j]) <= 2)
                    flag = 1;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}
