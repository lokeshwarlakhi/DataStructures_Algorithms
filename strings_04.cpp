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

int callandsay(int a){
    unordered_map<char,int> m;
    string s = str(a);
    reverse(s.begin(),s.end());
    for(char i:s){
        m[i]+=1;
    }
    int p =0;
    for(auto pr:m){
        int q = (pr.second*10) + (int)pr.first;
        p = (p*10)+q;
    }
    return p;
}
int main(){
    int n;cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        p = callandsay(p);
    }
    cout<<p;
    return 0;
}