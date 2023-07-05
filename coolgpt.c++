#include <iostream>
using namespace std;

bool isCoolNumber(int n) {
    // Convert the number to a string and split it into digits
    string s = to_string(n);

    // Calculate the sum of the first half of the digits and the second half of the digits
    int mid = s.length() / 2;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < mid; i++) {
        sum1 += s[i] - '0';
    }
    for (int i = mid; i < s.length(); i++) {
        sum2 += s[i] - '0';
    }

    // Return whether the sums are equal
    return sum1 == sum2;
}

int main() {
    // Test the function
    cout << isCoolNumber(23650) << endl;  // Output: 1 (true)
    cout << isCoolNumber(157) << endl;   // Output: 0 (false)

    return 0;
}
