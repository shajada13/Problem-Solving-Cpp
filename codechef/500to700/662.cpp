//662 Chef and Water Bottles

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;

        int maxBottles = min(N, K / X);  
        cout << maxBottles << endl;
    }

    return 0;
}
