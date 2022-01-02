// Spirally traversing a matrix
// Sample input: 4 4
// 1  2   3   4 
// 5  6   7   8 
// 9  10  11  12 
// 13 14  15  16
// Sample output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define f(t)  int t; cin>>t; while(t--)

void c_p_c(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    // c_p_c();
    int n,m;
    cin>>n>>m;
    
    int a[n][m];
    
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int minr = 0;
    int minc = 0;
    int maxr = (n-1);
    int maxc = (m-1);
    int te = n*m;
    int c = 0;
    while(c<te){
        //top wall
        for(int i=minr , j =minc ;j<=maxc && c<te ;j++){
            cout<<a[i][j]<<endl;c++;}
        minr++;
        // right wall
        for(int i=minr, j = maxc;i<=maxr && c<te ;i++){
            cout<<a[i][j]<<endl;c++;}
        maxc--;
        // bottom wall
        for(int i = maxr,j= maxc;j>=minc && c<te ;j--){
            cout<<a[i][j]<<endl;c++;}
        maxr--;
        //left wall
        for(int i = maxr,j = minc;i>=minr && c<te ;i--){
            cout<<a[i][j]<<endl;c++;}
        minc++;
    }


    return 0;
}