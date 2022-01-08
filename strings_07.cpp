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
    int c1=0,c0=0;
    int ans = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            c1+=1;
        else
            c0+=1;
        if(c1==c0)
            ans+=1;

    }
    if(c1!=c0){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}