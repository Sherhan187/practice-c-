#include<bits/stdc++.h>
using namespace std;
double a=10,s,n,ss,q;
int main(){
	cin>>n;
	for(int i = 1;i <= 10 ; ++i){
		cout<<a<<" ";
		if(i<8){
			s+=a;
		}
		a=a+a*0.1;
	}
	cout<<endl<<s;
	for(int i=0 ; i< n ;++i){
		a=a+a*0.1;
		ss+=a;
	}
	cout<<endl<<ss;
	for(int i = 0; i< 1000 ; ++i){
		if(a>80){
			break;
		}
		a=a+a*0.1;
		q=i;
	}
	cout<<endl<<q;
}