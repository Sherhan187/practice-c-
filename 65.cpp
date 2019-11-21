#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,a1,a2,a3,a4,ar[4];
	cin>>a;
	a1 = a/1000;
	a2=(a%1000)/100;
	a3=a%100/10;
	a4=a%10;
	ar[0]=a1;
	ar[1]=a2;
	ar[2]=a3;
	ar[3]=a4;
	for(int i = 0; i<4;i++){
		if(ar[i]<5){
			cout<<ar[i];
		}
	}for(int i = 0; i<4;i++){
		if(ar[i]>=5){
			cout<<ar[i];
		}
	}
}

