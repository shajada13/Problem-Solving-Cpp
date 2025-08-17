// Bus seat Numbering

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T ;
	cin >> T ;
	
	while (T--){
	    int N ;
	    cin >> N ;
	    
	    if (N < 11 ){
	        cout <<  "Lower Double" << endl;
	    } else if (N > 10 &&  N < 16 ){
	        cout << "Lower Single" << endl;
	    }else if (N > 15 &&  N < 26 ){
	        cout << "Upper Double" << endl;
	    }else if (N > 25 &&  N < 31 ){
	        cout << "Upper Single" << endl;
	    }
	   // cout << ( N < 11  ? "Lower Double" : "Lower Single" ) << endl ;
	}

}
