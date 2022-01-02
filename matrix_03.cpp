#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int> ans;
	int r,c;cin>>r>>c;
	int m[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	int p =0; int max = INT_MIN;
	for(int i=0;i<r;i++){
		p = 0;
		for(int j=0;j<c;j++){
			if(m[i][j]==1){
				p+=1;
				
			}
		}
		if(p>max){
			max = p;
			cout<<"max "<<max<<endl;
			ans.first = i;
			cout<<"First "<<ans.first<<endl;
			ans.second = p;
			cout<<"Second "<<ans.second<<endl;
		}
	}
	cout<<ans.first<<endl;
}
