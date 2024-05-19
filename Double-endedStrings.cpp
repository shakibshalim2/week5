#include <bits/stdc++.h>
using namespace std;

int min_operations(string a, string b) {
    int n = a.size();
    int m = b.size();
    int msub = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int length = 0;
            while (i + length < n && j + length < m && a[i + length] == b[j + length]) {
                length++;
            }
            msub = max(msub, length);
        }
    }
 return (n + m - 2 * msub);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << min_operations(a, b) << endl;
    }
}
