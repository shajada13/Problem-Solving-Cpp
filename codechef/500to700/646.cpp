//finding shoes 646 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int T ;
    std::cin >>  T;
    
    while (T --){
        int N , M ;
        cin >> N >> M ;
        
// N >= M
// The shop’s left shoes are not enough (or just enough).
// Chef needs N pairs.
// Out of these, M pairs can be made using the shop’s left shoes.
// The remaining (N - M) pairs must be fully made (both left + right) → that’s (N - M) * 2 shoes.

  if (N >= M){
          cout << (N - M)*2 + M << endl;   //  if true (N >= M) then (N - M) * 2 = shoes to be made
                                           // + M = existing left shoes
   }else {
          cout << N <<endl;  // N < M they only need aa right shoes , this equal to N , SO WE Print N ;
      }
    }

    return 0 ;
}
