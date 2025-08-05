// Problems in your to-do list / 580 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T ;
    cin >> T ;
   
   
    for (int i = 0 ; i < T ; i++ ){
         int N ;
         cin >> N ;
         int array[N] ;
         int count = 0 ;
    
         for (int j = 0 ; j < N ; j++){
             cin >> array[j];
             if (array[j] >= 1000){
                 count ++ ;
             }
         }
         cout << count << endl;
    }
}
