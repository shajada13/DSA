#include <iostream>
using namespace std;
int binaryF( int bi){
   int ans = 0 ;
   int pow = 1 ;

   while (bi > 0)
   {
    int rem = bi % 10 ;
    ans += rem * pow ;
    pow *= 2 ;
    bi = bi / 10 ;
   }

   return ans ;
   
}
int main() {
    int binary = 101 ; 
    // cin >> binary ;

    cout << binaryF (binary)<< endl;
    return 0;
}