#include<bits/stdc++.h>
using namespace std;
long long result=0;
void Undertale(){
    int a,b,n;
    cin>>a>>b>>n;
    result=b;
    for(int i=0,x=0;i<n;i++){
        cin>>x;
        result+=min(a-1,x);
    }
    cout<<result<<endl;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
       Undertale();
    }
}

