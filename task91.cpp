#include<bits/stdc++.h>
using namespace std;
double a=3,sum=0;
int main(){
	for(double i=a;i<10;++i){
		sum+=(i--/i);
	}
	cout<<sum;
}