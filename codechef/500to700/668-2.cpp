//Finding Square Roots

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        int squareRoot = sqrt(N); 
        
       cout << squareRoot << endl;

        // int squareRoot = 0;

        // for (int i = 1; i*i <= N; i++) {
        //     squareRoot = i;
        // }

        // cout << squareRoot << endl;
    }

    return 0;
}
