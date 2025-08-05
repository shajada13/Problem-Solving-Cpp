#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        vector<int> arr = {A, B, C, D};
        int maxVal = *max_element(arr.begin(), arr.end());
        int sum = A + B + C + D - maxVal; // sum of other 3

        if (maxVal > sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
