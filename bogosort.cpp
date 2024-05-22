#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        
        vector<int> n(s);
        for (int i = 0; i < s; i++) {
            cin >> n[i];
        }
        
        priority_queue<int> max_heap(n.begin(), n.end());
        vector<int> sN;
        while (!max_heap.empty()) {
            sN.push_back(max_heap.top());
            max_heap.pop();
        }
        
        for (auto& num : sN) {
            cout << num << " ";
        }
        cout << endl;
    }
}
