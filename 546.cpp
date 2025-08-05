#include <bits/stdc++.h>
using namespace std;

int main() {

    int T ;
     cin >> T ;
     
      while ( T--){
        int X , N ; 
        cin >> X >> N ;
        
        int totalSlices = X * N ;
        int totalPizza = totalSlices / 4 ;
        int rem = totalSlices % 4;
        
        
        if ( rem > 0  ){
           totalPizza ++;
        }
        cout << totalPizza << endl;
     }

     return 0 ;
}
