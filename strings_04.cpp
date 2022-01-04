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
    unordered_map<char,int> m;
    string n;cin>>n;
    reverse(n.begin(),n.end());
    // n = str(n);
    for(char i:n){
        m[i]+=1;
    }
    // for(auto &c: m){
    //     cout<<c.second<<c.first;
    // }

    return 0;
}