// Maximise the Tastiness 627

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T ;
    cin >> T ;
    
    while (T--){
        int A ,B ,C , D ;
        cin >> A >> B >> C >> D ;
        
        if (A+C > A+D ){
            
            if (A + C > B + C){ 
                
             cout << A + C << endl;
             
            }else {
                cout << B + C << endl;
            }
            
        }else {
            
             if (A + D > B + D){ 
                
             cout << A + D << endl;
             
            }else {
              
            cout << B + D << endl;
            
            }
            
        }
    }
}
