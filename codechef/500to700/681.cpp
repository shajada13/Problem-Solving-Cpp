// Blackjack code chef 681

#include <bits/stdc++.h>
using namespace std;

int main() {

    int T ;
    cin >> T ;
    
    while (T--){
        int A , B ; 
        cin >> A >> B ;
        
        int sum = A + B ;
        
        int thirdNumber = 21 - sum ;
        
        if (thirdNumber <= 10 ){
            cout << thirdNumber << endl;
        }else {
            cout << -1 << endl;
        }
    }

}
