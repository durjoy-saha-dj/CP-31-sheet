#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, st = 0, en, ans = 0;
        cin >> n;
        en = n - 1;
        string s;
        cin >> s;

        while(st <= en) {
            if(st == en) {
                ans = 1;
                break;
            }
            else if(s[st] != s[en]){
                st++;
                en--;
            }
            else {
                ans = en - st + 1;
                break;
            }

        }

        cout << ans << endl;
    }
}
