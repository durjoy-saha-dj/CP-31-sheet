#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b, c;
        int lb, lc, mn = INT_MAX;

        for(int i = 0; i < n; i++) {
            mn = min(mn, a[i]);
        }
        for(int i = 0; i < n; i++) {
            if(mn == a[i])
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
        lb = b.size();
        lc = c.size();

        if(lc == 0 || lb == 0)
            cout << -1 << endl;
        else {
            cout << lb << " " << lc << endl;
            for(int i = 0; i < lb; i++) {
                cout << b[i] << " ";
            }
            cout << endl;

            for(int i = 0; i < lc; i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }


    }
}
