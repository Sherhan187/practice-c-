#include <bits/stdc++.h>
using namespace std;
int main(){
	int d, m, y;
	cin>>d>>m>>y;
	if(m==2&&d>0 && d < 29){
		cout<<"Yes";
	}else if(m>0 && m<2||m>2&&m<13&&d>0&&d<32&&y>0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
