#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int x,y,z;
	cin>>x>>y>>z;

	int s=0,d=0;

	if(a>x){
		s+=1;
	}
	else if(x>a){
		d+=1;
	}
	if(b>y){
		s+=1;
	}
	else if(y>b){
		d+=1;
	}
	if(c>z){
		s+=1;
	}
	else if(z>c){
		d+=1;
	}

	cout<<s<<" "<<d<<endl;

	return 0;
}