#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &a,int t){
    int l=0,r=a.size();
    while(l<r){
        int m=l+(r-l)/2;
        if(a[m]<t){
            l=m+1;
        } 
        else{
            r=m;
        }
    }
    return l;
}

int upperBound(vector<int> &b,int t){
    int l=0,r=b.size();
    while(l<r){
        int m=l+(r-l)/2;
        if(b[m]<=t){
            l=m+1;
        } 
        else{
            r=m;
        }
    }
    return l;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int k;
    cin>>k;
    vector<pair<int,int>>q(k);
    for(int i=0;i<k;i++){
        cin>>q[i].first>>q[i].second;
    }
    for(auto&query:q){
        int l=query.first;
        int r=query.second;
        int count=upperBound(a,r)-lowerBound(a,l);
        cout<<count<<endl;
    }
}
