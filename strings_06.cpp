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

void permute(string s, string answer){
    if(s.length()==0){
        cout<<answer<<" ";
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string lss = s.substr(0,i);
        string rss = s.substr(i+1);
        string rem = lss+rss;
        permute(rem,answer+ch);
    }
}

int main(){
    // c_p_c();
    string s;
    cin>>s;
    permute(s,"");
    return 0;
}