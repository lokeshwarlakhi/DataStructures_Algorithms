#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int r,c;cin>>r>>c;
int m[r][c];
int ct =0;
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>m[i][j];
		if(m[i][j]==1)
			ct++;
	}
}
if(ct%2!=0){
	for(int i=0;i<ct;i++){
		cout<<1<<" ";
	}
}
else{
for(int i=0;i<2;i++){
	for(int j=0;j<ct/2;j++){
		cout<<1<<" ";
	}
    cout<<endl;
}

}
    
}
