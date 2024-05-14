#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &a,int t){
    int l=0,r=a.size()-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==t){
            return true;
        } 
        else if(a[m]<t){
            l=m+1;
        } 
        else{
            r=m-1;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>q(k);
    for(int i=0;i<k;i++){
        cin>>q[i];
    }
    for(int i=0;i<k;i++){
        if(binarySearch(a,q[i])){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
}
