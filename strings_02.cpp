// Palindrome or Not
#include<iostream>
#include<bits/stdc++.h>
#include<string>
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

    string p = s;
    reverse(s.begin(),s.end());
    if(p==s)
        cout<<"yes they are palindrome";
    return 0;
}