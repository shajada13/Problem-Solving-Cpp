// The Last Levels code chef 679 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ; 
	cin >> T ;
	
	while (T--){
	    
	    int X , Y , Z ;
	    cin >> X >> Y >> Z ;
	    
	    long long breaks = (X - 1) / 3;
        long long total_time = X * Y + breaks * Z;
        
        cout << total_time << endl;
	    
	}

    return 0 ; 
}
