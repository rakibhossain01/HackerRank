#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a[5],min=0,max=0,n=5;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		min+=a[i];
		max+=a[i+1];
	}

	cout<<min<<" "<<max<<endl;
}