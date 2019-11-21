#include<cmath>
#include<string>
using namespace std;
int main(){
    int a,b,c,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    if (a+b>c && a+c>b && b+c>a)
        cout<<sqrt(p*(p-a)*(p-b)*(p-c));
    else
        cout<<"cant be a triangle";
}
