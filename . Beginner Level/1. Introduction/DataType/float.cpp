#include <iostream>
using namespace std;

int main() {

    float num = 2.5f;  // একটি ফ্লোট টাইপ ভেরিয়েবল 'num' ঘোষণা করা হলো এবং তাকে ২.৫ মান দেওয়া হলো
    cout << "Float value: " << num << endl;  // 'num' এর মান প্রিন্ট করা হবে

    return 0;
}

// Note (English):
// 'float' is a data type used to store decimal (fractional) numbers.
// It typically uses 4 bytes (32 bits) of memory and maintains precision up to about 6–7 digits.
// When defining a float variable, it is often necessary to add 'f' or 'F' at the end (e.g., 2.5f) 
// to indicate that the number is a float instead of a double.

// Note (বাংলায়):
// 'float' ডেটা টাইপ দিয়ে দশমিক সংখ্যা সংরক্ষণ করা হয়, এবং এটি তুলনামূলকভাবে কম মেমরি ব্যবহার করে।
// এটি সাধারণত ৪ বাইট মেমরি নেয় এবং প্রায় ৬-৭ ডিজিট পর্যন্ত সঠিক মান প্রদান করে।
// কখনো কখনো মানের শেষে 'f' বা 'F' যোগ করতে হয় (যেমন: 2.5f) যাতে কম্পাইলার বুঝতে পারে এটি একটি ফ্লোট সংখ্যা।
