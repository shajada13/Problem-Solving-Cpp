// Is the Score Consistent / 572

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T ;
    cin >> T ;
    
    while (T --){
        int A , B , C , D ;
        cin >> A >> B >> C >> D ;
        
        if (A <= C && B <= D){
            cout << "POSSIBLE" << endl ;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    
    return 0 ;
}
