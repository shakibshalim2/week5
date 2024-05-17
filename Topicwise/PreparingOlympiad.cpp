#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int count = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        int minDifficulty = 1e6 + 1;
        int maxDifficulty = 0;
        int problems = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += c[i];
                minDifficulty = min(minDifficulty, c[i]);
                maxDifficulty = max(maxDifficulty, c[i]);
                ++problems;
            }
        }

        if (problems >= 2 && sum >= l && sum <= r && (maxDifficulty - minDifficulty) >= x) {
         count++;
        }
    }

    cout << count << endl;
}
