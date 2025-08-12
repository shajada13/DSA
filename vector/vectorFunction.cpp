#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> value = {21, 33};

    // Print size of vector
    cout << "Size: " << value.size() << endl;

    // Add element at the end
    value.push_back(41);

    // Print all elements
    cout << "After push_back: ";
    for (int v : value) cout << v << " ";
    cout << endl;

    // Remove last element
    value.pop_back();

    // Print all elements again
    cout << "After pop_back: ";
    for (int v : value) cout << v << " ";
    cout << endl;

    // Print first element
    cout << "First element (front): " << value.front() << endl;

    // Print last element
    cout << "Last element (back): " << value.back() << endl;

    // Print element at index 1
    cout << "Element at index 1: " << value.at(1) << endl;

    return 0;
}
