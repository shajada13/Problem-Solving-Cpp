//649 Mario and Transformation

#include <bits/stdc++.h>
using namespace std;

int transformation (int t ){

while (t -- ){
        int X ;
        cin >> X ;
        
        if (X % 3 == 0 ){
            cout << "NORMAL" << endl;         // function work like , when you want , he can ready to help , ha ha ha 
        } else if (X % 3 == 1 ){
            cout << "HUGE" << endl;
        }else {
            cout << "SMALL" << endl;
        }
    }
    
    
}

int main() {

    int T ;
    cin >> T ;

    transformation (T);
    
    // while (T -- ){
    //     int X ;
    //     cin >> X ;
        
    //     if (X % 3 == 0 ){
    //         cout << "NORMAL" << endl;
    //     } else if (X % 3 == 1 ){
    //         cout << "HUGE" << endl;
    //     }else {
    //         cout << "SMALL" << endl;
    //     }
    // }
    
    
    return 0 ;

}
