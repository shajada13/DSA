#include <iostream>
using namespace std;

int main() {
    int numBinary = 101;
    int pow = 1 ;
    int ans = 0 ;

    while (numBinary > 0){
        int rem = numBinary % 10 ;
        ans += rem * pow ;
        numBinary = numBinary / 10 ;
        pow *= 2 ;
    }
    cout << ans ;

    return 0;
}