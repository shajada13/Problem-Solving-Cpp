#include <iostream>
using namespace std;

int main() {

    cout << "HELLO" << endl;  // Prints "HELLO" and moves to a new line using endl
    cout << "WORLD" << endl;  // Prints "WORLD" and moves to a new line

    cout << "  " << endl;     // Creates a blank line (gap between two lines)

    // We can also use \n for new lines
    cout << "Hi" << "\n";     // Prints "Hi" and moves to new line using \n
    cout << "How are you ";

    return 0;
}

// Note:
// endl and \n both create a new line,
// but endl also flushes the output buffer,
// which can make it slower than \n.

// বাংলায়:
// endl এবং \n দুটোই নতুন লাইন তৈরি করে,
// কিন্তু endl আউটপুট বাফারকে ফ্লাশ করে,
// তাই এটি \n এর তুলনায় একটু ধীর হতে পারে।
