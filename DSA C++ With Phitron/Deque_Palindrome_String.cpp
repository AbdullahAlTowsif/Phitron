#include <iostream>
#include <deque>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    deque<char> dq;
    // Push each character of the string to the back of the deque
    for (char c : str) {
        dq.push_back(c);
    }
    // Compare the first and last character of the deque, 
    // removing them until the deque is empty or has only one element left
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    if (isPalindrome(str)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
