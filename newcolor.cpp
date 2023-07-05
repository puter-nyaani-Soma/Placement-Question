#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> answers(n);
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }

    sort(answers.begin(), answers.end());

    int minChildren = n;
    for (int i = 0; i < n; i++) {
        int remaining = n - i - 1;
        int currentCount = answers[i] + 1;

        if (remaining < currentCount) {
            minChildren = max(minChildren, currentCount);
        }
    }

    cout << minChildren << endl;

    return 0;
}
