#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        long long b;
        cin>>t>>b;
        vector<int>a(t);
        for(int i=0;i<t;i++){
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(),a.end());
        int ans=0;
        long long sum=0;
        for (int i = 0; i < t; i++){
            if(sum+a[i]>b)
            break;
            sum+=a[i];
            ans++;

        }
        cout<<ans<<endl;
    }
}