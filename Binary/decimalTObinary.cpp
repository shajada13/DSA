#include <iostream>
using namespace std;

int main() {
    int decNum = 47 ;
    int pow = 1 ;
    int sum = 0 ;

    while (decNum > 0 )
    {
        int rem = decNum % 2 ;
        decNum = decNum / 2 ; 
        sum += rem * pow ;
        pow*=10;
       
    }

    cout << sum ;
    
    return 0;
}