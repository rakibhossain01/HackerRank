#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n][n],s=0,c=0,r=n-1;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				s+=a[i][j];
			}
		}
		c+=a[i][r-i];
	}

	cout<<abs(s-c)<<endl;

	return 0;
}