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
    if(a==0){
        return 1;
    }
    else{
    string s = to_string(a);
    reverse(s.begin(),s.end());
    unordered_map<char,int> mp;
    
    for(char c: s){
        mp[c]=mp[c]+1;
        
    }
    string p = "";
    

    for(auto pr:mp){
        p = p+to_string(pr.second)+pr.first;
    }
    return stoi(p);
    }

}
int main(){
    int n;cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        p = callandsay(p);
    }
    cout<<p;
    return 0;
}