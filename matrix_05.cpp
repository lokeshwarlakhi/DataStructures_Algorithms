#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define m(r,c) int r,c;cin>>r>>c;int m[r][c];

int main(){
    m(r,c);
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
    for(int i=0;i<x.size();i++){
        if(i%(c)==0 && i!=0){
            cout<<endl;
            cout<<x[i]<<" ";
        }
        else cout<<x[i]<<" ";
    }


}