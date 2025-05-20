

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    
	int T ;
	cin >> T ;
	
    while ( T --){
        
        int A , B , X , Y ;
        cin >> A >> B >> X >> Y ;
        
        int powerNeed = A * B ;
        int powerProvided = X * Y ;
        
        if (powerProvided >= powerNeed){
             cout << "Yes"  << endl;
        }else {
            cout << "No" << endl;
        }
    }

}
