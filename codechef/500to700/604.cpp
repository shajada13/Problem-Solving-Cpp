//604 Elections in Chef land

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T ;
    cin >> T ;
    
    while (T -- ) {
        
        int N , X ;
        cin >> N  >> X ;
        
        int arr [N] ;
        for (int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        
        int count = 0 ;
        
        for (int j = 0 ; j < N ; j++){
            if (arr[j] >= X ){
                count ++ ;
            }
        }
        
        cout << count << endl;
    }
    
    return 0 ;
}
