//Discus Throw . 622 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin >> T ;
	
	while (T--) {
	    int A , B , C ;
	    cin >> A >> B >> C;
	    
	    if ( A >= B && A >= C ){
	        cout << A << endl;
	    } else if ( B >= A && B >= C ){
	        cout << B << endl;
	    }else {
	        cout << C << endl;
	    }
	}

}
