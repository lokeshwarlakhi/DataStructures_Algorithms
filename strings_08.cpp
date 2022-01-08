#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define f(t)  int t; cin>>t; while(t--)
#define ll    long long int

void c_p_c(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    // c_p_c();
    int n;
    cin>>n;
    int ar[n];
    int i=0;
    for(i=0;i<n;i++)
        cin>>ar[i];

    for(i=0;i<n;i++){
        if(ar[i]>ar[i+1]){
            i-=1;
            break;
        }
    }
    int j=0;
    for(j=i+1;j<n;j++){
        if()
    }
    // cout<<i;
    return 0;
}