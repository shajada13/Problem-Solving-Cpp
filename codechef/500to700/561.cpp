#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int T ;
	cin >> T ;
	
    while (T--){
        double X , Y ;
        cin >> X >> Y ;
        
        double expart =( Y / X )* 100 ;
        
        if (expart >= 50){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
