// Chef in his Office / 532

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T ;
    cin >> T ;
    
    while (T--){
        int X , Y ;
        cin >> X >> Y ;
        
        int hours = X * 4 ;
        int totalH = hours + Y ;
        if (Y<X){
              cout << totalH << endl ;
        }else {
            cout << " Y is grater than X " << endl;
        }
        
    }
    return 0 ;
}
