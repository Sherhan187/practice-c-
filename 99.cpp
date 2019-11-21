#include<bits/stdc++.h>
using namespace std;
int a=1000,q;
int main(){
    for(int i=a;i<10000;++i){
        string s=to_string(i);
        if(s[0]==s[1] ||s[0]==s[3]||
            s[0]==s[2] || s[1]==s[2]||s[1]==s[3]||s[2]==s[3]) {
           q=0;
        }
        else cout<<i<<endl;
    }
}
