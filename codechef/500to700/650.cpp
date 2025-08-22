#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T ;
    cin >> T;
    
    
    while ( T--){
        
        int X , Y , Z ;
        cin >> X >> Y >> Z ;
        
        
        
        int pixels = Y / X ;
        int fireBullet = max(0, Z - pixels);
        
        if ( pixels == 0 ){
            cout << 0 << endl; 
        }else {
            cout << fireBullet << endl; 
        }
        
      //  cout << ((pixels == 0) ? 0 : fireBullet ) << endl;  
      
      // you already know ternary  conditional operator
        
    }
    
    return 0 ;

}
