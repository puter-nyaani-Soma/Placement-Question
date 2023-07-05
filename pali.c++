#include <iostream>
using namespace std;
int reverse(int n) {
  int rev = 0;

  while (n) {
    rev = rev * 10 + (n % 10);
    n = n / 10;
  }
  return rev;
}
void check_pali(int n, int times) {
  if (times>0) {
    int rev = reverse(n);
    int sum = rev + n;
    if (sum == reverse(sum)) {
        cout<<sum<<'-'<<times<<endl;
      cout <<endl<< "Palindrome";
    } else {
        cout<<sum<<'-'<<times<<endl;
      check_pali(sum, times - 1);

    }

  } else {
    cout <<endl<< "Not Palindrome";
  }
}
int main() {
  int n = 163;
  check_pali(n,5);
}