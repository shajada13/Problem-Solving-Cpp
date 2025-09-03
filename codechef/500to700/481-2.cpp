//Fill Candies code chef 681 

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T ;
	cin >> T ;
	
	while (T--){
	    
	    int N , K , M ;
	    cin >> N >> K >> M ;
	    
	    int  oneBag = K * M ;
	    int totalBags = N / oneBag  ;
	    
	    if (N % oneBag == 0){
	         cout << totalBags << endl;
	    }else {
	        cout << totalBags + 1  << endl;
	    }
	    
	}

}
