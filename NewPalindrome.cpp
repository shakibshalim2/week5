#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string n;
        cin >> n;
        
        bool isD = false;
        for (int i = 1; i < n.size() / 2; i++) {
            if (n[i] != n[i - 1]) {
                isD = true;
                break;
            }
        }

        if (isD) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
