#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, two = 0;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 2)
                two++;
        }
        if(two % 2 == 0) {
            int ans = two;
            if(two == 0) {
                cout << 1 << endl;
            }
            else{
                for(int i = 0; i < n; i++) {
                    if(a[i] == 2) {
                        --two;
                        if(ans / 2 == two) {
                            cout << i + 1 << endl;
                            break;
                        }
                    }
                }
            }

        }
        else
            cout << -1 << endl;

    }
}
