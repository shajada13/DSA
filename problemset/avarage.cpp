#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while(T--) {
        int A, B, C;
        cin >> A >> B >>  C ;

        int ans = (A + B) / 2;
        if (ans >= C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
