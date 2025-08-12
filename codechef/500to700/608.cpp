// 608 Minimum Cars required  code 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T ;
    cin >>  T;
    
    while ( T -- ){
        
        int N ;
        cin >> N ;
        
        if ( N % 4 == 0 ){
            cout << N / 4<< endl;
        }else {
            cout << N / 4 + 1 << endl;
        }
            
    }

}
