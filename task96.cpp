#include<bits/stdc++.h>
using namespace std;
long double pre,sum,n,x=0;
int main(){
    cin>>n;
    for(int i = 1 ; i <= n; ++i){
        pre=1.0/(cos(pow(x,i)));
        sum+=pre;
    }
    cout<<sum;
}