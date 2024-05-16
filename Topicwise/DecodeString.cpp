#include<bits/stdc++.h>
using namespace std;
string decode(string &t){
    string s;
    int n = t.size();
    for (int i = n - 1; i >= 0;) {
        if (t[i] == '0') {
            int num = (t[i-2] - '0') * 10 + (t[i-1] - '0');
            s += ('a' + num - 1);
            i -= 3;
        } 
        else {
            int num = t[i] - '0';
            s += ('a' + num - 1);
            i--;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        string t;
        cin >> n >> t;
        cout << decode(t) << endl;
    }
}
