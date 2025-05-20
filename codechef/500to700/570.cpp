#include <bits/stdc++.h>
using namespace std;

int main() {
	
    
    int T ;
    cin >> T ;
    
    while ( T--){
        int N ,X ;
        
        cin >> N >> X ; 
        
        int moreCandies ;
       
        
        if (N >X){
             moreCandies = N - X ;
        }else {
            moreCandies = 0 ;
        }
         
        int rem =   moreCandies % 4 ;
        int packets = moreCandies / 4 ;
       
        
        if(rem > 0 ){
            packets ++ ;
            cout << packets <<endl;
        }else {
            cout << packets << endl;
        }
      
    }
}
