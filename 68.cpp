#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((b*b-4*a*c)>0)
        cout<<(-b+sqrt(b*b-4*a*c))/(2*a)<<" and "<<(-b-sqrt(b*b-4*a*c))/(2*a);
    else if((b*b-4*a*c)==0)
        cout<<(-b)/(2*a);
    else
        cout<<"no sol";
}
