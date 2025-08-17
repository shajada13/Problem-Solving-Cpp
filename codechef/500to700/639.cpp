// Police and Thief 639 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T ;
    cin >> T ;
    
    while (T--){
        int X , Y ;
        cin >> X >> Y ;
        
        if (X >= Y){
        cout << X - Y << endl;;
        }else {
            cout << Y - X << endl;
        }
    }
}
