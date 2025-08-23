//Complementary Strand in a DNA 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
       int N ;
       cin >> N ;
        string S;
        cin >> S;   

       
        for (char &ch : S) {
            if (ch == 'A') ch = 'T';
            else if (ch == 'T') ch = 'A';
            else if (ch == 'C') ch = 'G';
            else if (ch == 'G') ch = 'C';
        }

        cout << S << endl;
    }
    return 0;
}
