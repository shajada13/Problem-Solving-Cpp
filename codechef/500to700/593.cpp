//593 Good Program code chef 

#include <bits/stdc++.h>
using namespace std;

int main() {
	
        int T ;
        cin >> T ;
        
        while (T--){
            int X ;
            cin >> X ;
            
            if ( X % 4 == 0 ) {
                cout << "Good" << endl;
            }else {
                cout << "Not Good" << endl;
            }
        }
        
        return 0 ;
}
