//Bath in Winters , 643 code chef

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T ;
    
    while (T--){
        int X , Y ;
        cin >> X >> Y ;
        
        int litres = Y * 2 ;
        int  bath = X / litres ;
        
        // if (X < litres ){
        //     cout << 0 << endl;
        // }else{
        //     cout << bath << endl;
        // }
        
        
        cout << ((X < litres) ? 0 : bath ) << endl; 
        //simple proccess to trinary conditional operator ( if else short type )
    }
}
