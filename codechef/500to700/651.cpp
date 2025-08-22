// 651 chess Ratings 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  
    cin >> T;  // total number of test cases
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;  // current score (X) and target score (Y)

        //alternative short approach:
        // int need = max(0, Y - X); 
        // cout << (need + 7) / 8 << endl;

        int needGame = Y - X;  // how many more points needed
        
        if (needGame <= 0) {
            cout << 0 << endl;   // already reached or exceeded target
        } 
        else if (needGame % 8 == 0) {
            cout << needGame / 8 << endl;  // divisible by 8 → exact number of games
        } 
        else {
            cout << needGame / 8 + 1 << endl;  // not divisible → need one extra game
        }
    }
}
