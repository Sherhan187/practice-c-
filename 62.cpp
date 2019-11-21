#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int a1, a2, a3, a4,a5;
	a1=a/10000;
	a2 = 0;
	a3=(a%1000)/100;
	a4=0;
	a5=a%10;
	cout<<a1<<a2<<a3<<a4<<a5;
}
