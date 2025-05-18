#include <bits/stdc++.h>
using namespace std;

int main() {

    int T ;
    cin >> T ;
    
    while ( T--){
        int X , Y ;
        cin >> X >> Y ;
        
        int CredCoins = X * Y ;
        int count= CredCoins / 100 ;
        
        cout << count << endl;
        
    }
    
    return 0 ;
}
