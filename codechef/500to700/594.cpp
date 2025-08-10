// 594 Qualify the round code chef 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T ;
    cin >>  T;
    
    while ( T -- ){
        int X , A , B ; 
        cin >> X >> A >> B ;
        
        if (X <= A*1 + B*2 ){
            cout << "Qualify"<<endl;
        }else {
            cout << "NotQualify" << endl;
        }
    }
    
}
