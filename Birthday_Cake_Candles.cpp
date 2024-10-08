#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n],max=INT_MIN,count=0;

	for(int i=0;i<n;i++){
		cin>>a[i];

		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(max==a[i]){
			count++;
		}
	}

	cout<<count<<endl;

	return 0;
}