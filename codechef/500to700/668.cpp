Candy Distribution code chef 667

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T ;
    cin >> T ;
    
    while (T--){
        int M , N ;
        cin >> M >> N ;
        
        int distribute = M / N ;
        
        // if (distribute % 2 == 0 && M % N == 0){
        //     cout <<"Yes" << endl;
        // }else {
        //     cout << "No" << endl;
        // }
        
        cout << ((distribute % 2 == 0 && M % N == 0) ? "Yes" : "No") << endl;
    }

    return 0 ;
}
