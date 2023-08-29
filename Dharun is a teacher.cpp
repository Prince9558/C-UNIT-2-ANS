#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findSmallestDifference(int n, int *scores) {
    sort(scores, scores + n);
    
    int smallestDifference = INT_MAX;

    for (int i = 1; i < n; ++i) {
        int difference = scores[i] - scores[i - 1];
        smallestDifference = min(smallestDifference, difference);
    }

    return smallestDifference;
}

int main() {
    int n;
    cin >> n;

    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int result = findSmallestDifference(n, scores);
    cout << result << endl;

    return 0;
}

