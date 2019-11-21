#include<bits/stdc++.h>
using namespace std;
double sum=1,n;
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		sum+=1.0/i;
	}
	cout<<sum;
}