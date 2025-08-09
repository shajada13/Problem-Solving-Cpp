//584 codeforce problem 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N[3];
        for (int j = 0; j < 3; j++) {
            cin >> N[j];
        }



        int minTemp = max(N[0], N[2]);   // max function return max value , like a = 10 , b = 20 , then function return 20 ; 
        int maxTemp = N[1];             

        if (minTemp <= maxTemp) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
