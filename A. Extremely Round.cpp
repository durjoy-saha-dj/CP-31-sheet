#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll first_digit = n;
        while (first_digit >= 10) {
            first_digit /= 10;
        }

        int num_digits = to_string(n).size();
        ll ans = first_digit + (num_digits - 1) * 9;

        cout << ans << endl;
    }
}
