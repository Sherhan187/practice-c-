#include<bits/stdc++.h>
using namespace std;
long long pre,sum,n;
int main(){
    cin>>n;
    for(int i = 1 ; i <= n; ++i){
        pre=i;
        for(int j=i+1;j<=i*2;++j){
            pre*=j;
        }
        sum+=pre;
    }
    cout<<sum;
}
