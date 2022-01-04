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
    string s;cin>>s;
    map<char,int>m;
    // int k =0;
    for(char i:s){
        m[i] = m[i]+1;
    }
    for(auto &pr:m){
        if(pr.second>1)
            cout<<pr.first<<endl;
    }
    return 0;
}