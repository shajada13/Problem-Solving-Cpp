// Water Filling / 541
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T ;
	cin >> T ;
	
	while(T--){
	
    int B1 , B2 ,B3 ;
    cin >> B1 >> B2 >> B3 ;
    
    
    
    if (B1==1 && B2==1 ){
        cout << "Not now" << endl;
    }else if (B2 == 1 && B3 ==1){
        cout << "Not now" << endl;       
    } else if ( B1 == 1 && B3 == 1 ){
        cout << "Not now" << endl;
    }else {
        cout << "Water filling time" << endl;
    }
    
	}
    return 0 ;
}
