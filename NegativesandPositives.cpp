#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<ll>a(t);
        long long neg = 0, ans = 0,mn=LLONG_MAX;
        for(int i=0;i<t;i++){
            cin>>a[i];
            if(a[i]<0){
                neg++;
            }
            ans+=abs(a[i]);
            mn=min(mn,abs(a[i]));
        }
        if(neg%2==1)
            ans-=(2LL*mn);
        cout<<ans<<endl;
    }
}
