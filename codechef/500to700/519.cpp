#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X , Y , Z ;
        cin >> X >> Y >> Z ;
        int student = X * Y  ;
        
        double result = ( 1.0 * Z / student ) * 100;
        
        

            if (result > 50) {
                cout << "YES"<< endl;
            }else {
                cout << "NO" << endl;
            }
    }
}
