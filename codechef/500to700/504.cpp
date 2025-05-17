#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int subs = (N + 5) / 6; 
        cout << subs * X << endl;
    }
}
