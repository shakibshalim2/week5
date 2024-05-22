#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        
        vector<long long> a(s);
        for (int i = 0; i < s; i++) {
            cin >> a[i];
        }
        
        bool found = false;
        for (int i = 1; i < s - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << endl;
        }
    }
}
