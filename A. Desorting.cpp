#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0, mn = INT_MAX;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(is_sorted(a.begin(), a.end()) == 0)
            cout << 0 << endl;
        else
        {
            for(int i = 0; i < n - 1; i++) {
                mn = min(mn, (a[i + 1] - a[i]));
            }
            mn++;

            if(mn % 2 == 0)
                cout << mn / 2 << endl;
            else
                cout << (mn / 2) + 1 << endl;
        }
    }
}
