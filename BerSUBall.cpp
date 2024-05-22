#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }

    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    
    int pairs = 0;
    int j = 0;
    for (int i = 0; i < n && j < m;) {
        if (abs(boys[i] - girls[j]) <= 1) {
            pairs++;
            i++;
            j++;
        } 
        else if (boys[i] < girls[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    cout << pairs << "\n";
}
