#include <iostream>
using namespace std;
int sum1toN( int y){
     int sum = 0;
    for(int i = 1; i <= y ; i++){
     sum += i;
    }
    return sum;
}
int main() {
    int N ;
    cout <<" Whats your N  ?  Type = ";
    cin >> N ;
 
    cout << " Your ans is this = " <<  sum1toN(N);
    return 0;
}
 
// Same to calculate n factorial ;just change loop ,start to 1 not 0;