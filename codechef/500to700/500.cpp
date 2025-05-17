#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while(T--) {
        float A, B, C;
        cin >> A >> B >>  C ;

        float  ans = (A + B) / 2;
        if (ans > C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
