//592 Sasta Shark Tank code chef 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T ;
    cin >> T ;
    
    while (T--) {
        int A , B ;
        cin >> A >> B ;
        
        if (100/10*A == 100/20*B){
            cout << "ANY" << endl;
        }else if (100/10*A > 100/20*B){
            cout << "FIRST" << endl;
        }else {
            cout << "SECOND" <<endl;
        }
    }
}
