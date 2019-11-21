#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,a1,a2,a3,a4,ar[4],c,x;
	cin>>a;
	a1 = a/1000;
	a2=(a%1000)/100;
	a3=a%100/10;
	a4=a%10;
	ar[0]=a1;
	ar[1]=a2;
	ar[2]=a3;
	ar[3]=a4;
	int max = ar[0], min = ar[0];
	for(int i = 0; i < 4; i++){
		if(ar[i]>max){
			max = ar[i];
			x = i;
		}else if(ar[i]<min){
			min=ar[i];
			c=i;
		}
	}
	for(int i = 0; i<4;i++){
		if(i==c){
			cout<<ar[x];
			continue;
		}else if(i==x){
			cout<<ar[c];
			continue;
		}
		cout<<ar[i];	
	}
}


