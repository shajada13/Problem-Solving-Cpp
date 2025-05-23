// Janmansh and Assignments / 513

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X ;
        cin >> X ;
        int ans = 10 - X ;
        if (ans >= 3){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}
