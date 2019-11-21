61**
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]==number[1] || number[1]==number[2] || number[2]==number[3] || 
       number[0]==number[2] || number[1]==number[3] || number[0]==number[3]){
           cout<<"Number have the same numerals";
       }
    return 0;
} 

62**
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    for(int i=0; i<5; i++){
        if(number[i]%2==0){
            number[i]='0';
        }
    }
    cout<<number;
    return 0;
}

63**
#include <bits/stdc++.h>
using namespace std;
int main() {
    int number1, number2;
    cin>>number1>>number2;
    cout<<number1<<number2;
}

64**
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]==number[3] && number[1]==number[2]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

65**

68**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int D=b*b-4*a*c;
    if(D==0){
        cout<<"One root: "<<-b
/2*a;
    }
    else if(D<0){
        cout<<"Doesn't exist any roots";
    }
    else if(D>0){
        cout<<"Two roots: "<<(-b+sqrt(D))/2*a<<","<<(-b-sqrt(D))/2*a;
    }
    return 0;
}

69**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int p=(a+b+c)/2;
    if(a+b>c && a+c>b && b+c>a){
        cout<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    }
    else{
        cout<<"It is not a triangle";
    }
    return 0;
}
