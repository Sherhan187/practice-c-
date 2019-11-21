#include<bits/stdc++.h>
using namespace std;
long long sum=0,a,n;
int main(){
	cin>>a>>n;
	for(int i=1;i<=n;++i){
		sum+=pow(a+i,2);
	}
	cout<<sum;
}