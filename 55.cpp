#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3], c = 0;
	for(int i = 0; i<3; i++){
		cin>>a[i];
	}
	for(int i = 0; i < 3; i++){
		if(a[i]>0){
			c++;
		}
	}cout<<c;
}
