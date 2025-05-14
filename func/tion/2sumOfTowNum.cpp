#include <iostream>
using namespace std;

// void sum(int x ,int y){
//     int num = x + y ;
//     cout << num <<endl;
//     return ;
// }
 


// int main() {
    
//     int a = 10 , b =20;

//     sum(a,b);
    
//     return 0;
// }

// BN: ইনপুট-আউটপুট (cin, cout) এর লাইব্রেরি যুক্ত করা হয়েছে।
// BN: বারবার std:: না লিখে সরাসরি cout ব্যবহার করতে দেয়।

// Function definition
int sum(int x, int y) {
    return x + y;            // EN: Returns the sum of x and y.
                             // BN: x এবং y এর যোগফল রিটার্ন করে।
}

int main() {                 // EN: Main function from where the program starts executing.
                             // BN: প্রোগ্রামের শুরু এখান থেকেই হয়।

    int a, b;                // EN: Declares two integers (not used in this example).
                             // BN: দুটি পূর্ণসংখ্যা ভেরিয়েবল ঘোষণা করা হয়েছে (কিন্তু ব্যবহার হয়নি)।

    cout << sum(20, 30);     // EN: Calls sum() with 20 and 30, and prints the returned value.
                             // BN: sum() ফাংশনে ২০ ও ৩০ পাঠিয়ে রিটার্ন ভ্যালু প্রিন্ট করা হচ্ছে।

    return 0;                // EN: Indicates successful end of the program.
                             // BN: প্রোগ্রাম সফলভাবে শেষ হয়েছে বোঝাতে ০ রিটার্ন করা হয়েছে।
}


// also use float and double ,,