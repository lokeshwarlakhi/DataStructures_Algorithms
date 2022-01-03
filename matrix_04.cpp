#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
    int r,c;cin>>r>>c;
    int  m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
    vector<int> x;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            x.push_back(m[i][j]);
        }
    }
    sort(x.begin(),x.end());
    cout<<x[(x.size())/2]<<endl;
}