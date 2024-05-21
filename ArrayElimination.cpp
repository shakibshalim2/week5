#include<bits/stdc++.h>
using namespace std;

int read() {
    int x = 0, f = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        f = (ch == '-');
        ch = getchar();
    }
    while ('0' <= ch && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return f ? -x : x;
}

const int N = 200005;

int n;
int a[N], bit_count[31];

void solve() {
    n = read();
    memset(bit_count, 0, sizeof(bit_count));
    
    for (int i = 1; i <= n; i++) {
        a[i] = read();
        for (int x = a[i], j = 0; x; x >>= 1, j++) {
            if (x & 1) {
                bit_count[j]++;
            }
        }
    }
    
    for (int k = 1; k <= n; k++) {
        bool valid = true;
        for (int j = 0; j <= 30; j++) {
            if (bit_count[j] % k != 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << k << " ";
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = read();
    while (t--) {
        solve();
    }

}
