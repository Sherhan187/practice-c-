
54**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1<5 && n2<5 || n2<5 && n3<5 || n1<5 && n3<5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}


55**
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    if(number1>0 && number2>0 && number3>0){
        cout<<3<<endl;
    }
    else if(number1>0 && number2>0 || number2>0 && number3>0 || number1>0 && number3>0){
        cout<<2<<endl;
    }
    else if(number1>0 || number2>0 || number3>0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}


56***
#include <bits/stdc++.h>
using namespace std;
int main (){
    int direction, move;
    cin>>direction>>move;
    if(direction==12 && move==1 || direction==14 && move==-1 || direction==13 && move==0){
        cout<<"North";
    }
    else if(direction==12 && move==0 || direction==11 && move==1 || direction==13 && move==-1){
        cout<<"East";
    }
    else if(direction==11 && move==0 || direction==12 && move==-1 || direction==14 && move==1){
        cout<<"South";
    }
    else{
        cout<<"West";
    }
    return 0;
    
}

58**
#include <bits/stdc++.h>
using namespace std;
int main (){
    int day1, month1, year1;
    cin>>day1>>month1>>year1;
    int day2, month2, year2;
    cin>>day2>>month2>>year2;
    if(day1<day2 && month1<month2 && year1<year2 || 
       day1<day2 && month1<month2 && year1==year2 ||
       day1<day2 && month1==month2 && year1==year2 ||
       day1==day2 && month1<month2 && year1<year2 ||
       day1==day2 && month1==month2 && year1<year2 ||
       day1==day2 && month1<month2 && year1==year2 ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

59**
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]>number[1] && number[1]>number[2] && number[2]>number[3]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
} 

60**
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    int temp;
    temp=number[0];
    number[0]=number[2];
    number[2]=temp;
    cout<<number;
    return 0;
} 
