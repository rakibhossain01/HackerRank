#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];

	float p=0,s=0,o=0;

	for(int i=0;i<n;i++){
		cin>>a[i];

		if(a[i]>0){
			p++;
		}
		else if(a[i]<0){
			s++;
		}
		else{
			o++;
		}
	}
	cout<<fixed<<setprecision(6)<<p/n<<endl;
	cout<<fixed<<setprecision(6)<<s/n<<endl;
	cout<<fixed<<setprecision(6)<<o/n<<endl;

	return 0;
}