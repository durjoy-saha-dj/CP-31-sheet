#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, zeros = 0, mx = INT_MIN;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1){
                mx = max(mx, zeros);
                zeros = 0;
            }
            else
                zeros++;
        }
        mx = max(mx, zeros);
        cout << mx << endl;
    }
}
