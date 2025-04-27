#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, mns = 0, pls = 0, ans = 0;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == -1)
                mns++;
            else
                pls++;
        }
        if(pls >= mns){
            if(mns % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else {
            while(pls < mns || mns % 2 == 1) {
                pls++;
                mns--;
                ans++;
            }
            cout << ans << endl;
        }


    }
}
