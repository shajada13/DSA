#include <iostream>
using namespace std;

int min ( int x , int y){
    if (x > y){
        return  y;
    }else {
        return x;
    }
}

int main() {
    cout << " min = " <<min(2,3) ;
    return 0;
}