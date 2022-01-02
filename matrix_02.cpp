// Search a 2D Matrix

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> matrix;
	int r,c;cin>>r>>c;
	for(int i=0;i<r;i++){
		vector<int> t;
		for(int j =0 ;j<c;j++){
			int k;cin>>k;
		t.push_back(k);
		}
		matrix.push_back(t);
	}

	int target;cin>>target;int i;string s="false";
	for( i=0;i<r;i++){
		if(matrix[i][c-1]<target)
			continue;
		for(int j=0;j<c;j++){
		if(matrix[i][j]==target){
			s = "true";
			break;
		
		}
		// else
			// s="false";
		}
	}
	cout<<s<<endl;;

	return 0;
}
