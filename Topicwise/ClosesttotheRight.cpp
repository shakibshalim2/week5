#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &a,int t){
    int l=0,r=a.size()+1;
    int ans=a.size()+1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]>=t){
            ans=mid+1;
            r=mid-1;
        } 
        else{
            l=mid+1;
        }
    }
    return ans;
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
        cout<<find(a,q[i])<<endl;
    }
}
