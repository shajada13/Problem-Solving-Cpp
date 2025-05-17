#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];  
    }

    int evenCount = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            evenCount++;
        }
    }

    if (evenCount > N / 2) {
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }

    return 0;
}
