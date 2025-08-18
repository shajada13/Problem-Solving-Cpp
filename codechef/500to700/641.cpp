// 641 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T ;
    cin >> T ;
    
    while (T--){
        int N , X ;
        cin >> N >> X;
        
        int faceDown = N - X;
        
        if (faceDown > X){
            cout << X << endl;
        }else {
            cout << faceDown << endl;
        }
        
        //cout << ((faceDown > X) ? X : faceDown) << endl; trinary conditional operator
         
        //cout << min(X, faceDown) << endl; we can also use this - function min ;
        
    }

    return 0 ;
}
