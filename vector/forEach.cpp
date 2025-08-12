#include <bits/stdc++.h>  
// EN: Includes all standard C++ libraries (vector, iostream, etc.)
// BN: সব স্ট্যান্ডার্ড C++ লাইব্রেরি একসাথে ইনক্লুড করা হয় (vector, iostream ইত্যাদি)

using namespace std;  
// EN: Allows using standard library names without "std::" prefix
// BN: std:: না লিখে সরাসরি স্ট্যান্ডার্ড লাইব্রেরি নাম ব্যবহার করতে দেয়

int main() {
    // EN: Create a vector and initialize it with given integer values
    // BN: একটি ভেক্টর তৈরি করা এবং নির্দিষ্ট ইন্টিজার মান দিয়ে সেটি ইনিশিয়ালাইজ করা
    vector<int> value = {1, 2, 3, 4, 5, 6};

    // EN: Range-based for loop to iterate through each element in the vector
    // BN: ভেক্টরের প্রতিটি উপাদান একে একে নেওয়ার জন্য রেঞ্জ-ভিত্তিক for লুপ
    for (int val : value) {
        // EN: Print the element and move to the next line
        // BN: উপাদান প্রিন্ট করা এবং পরের লাইনে যাওয়া
        cout << val << endl;
    }

    // EN: Program ends here
    // BN: প্রোগ্রাম এখানে শেষ
    return 0;
}
