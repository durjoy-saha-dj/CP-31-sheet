#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if( (a + c) == (b + c) ) {
            if(c % 2 == 0)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }

        else if((a + c) > (b + c))
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}
