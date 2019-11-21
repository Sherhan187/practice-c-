#include <bits/stdc++.h>
using namespace std;
int main(){
	int d,m,y,d1,m1,y1;
	cout<<"first date: ";
	cin>>d>>m>>y;
	cout<<"second date: ";
	cin>>d1>>m1>>y1;
	if((m>0 && m<2||m>2&&m<13&&d>0&&d<32&&y>0)
		&&(m1>0 && m1<2||m1>2&&m1<13&&d1>0&&d1<32&&y1>0)){
			if(y>y1||(y==y1&&m>m1)||(y==y1&&m==m1&&d>d1)){
				cout<<"No";
			}else{
				cout<<"Yes";
			}
		}else{
			cout<<"Wrong date";
		}
	}

