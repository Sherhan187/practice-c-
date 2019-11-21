81**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number=100;
    int n=25;
    int i=0;
    do{
        cout<<number<<" ";
        number-=4;
        i++;
    }while(i<n);
    return 0;
}

82**
#include <bits/stdc++.h>
using namespace std;
int main(){
    double number=1.2;
    int n=9;
    int i=0;
    do{
        cout<<number<<" ";
        number+=0.2;
        i++;
    }while(i<n);
    return 0;
}

86**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=0;
    for(int i=0; i<=n; i++){
        number+=i;
        
    }
    cout<<number;
}

87**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=88;
    int number=0;
    for(int i=10; i<=n; i++){
        number+=i;
        
    }
    cout<<number;
}

88**
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=13;
    int number=1;
    for(int i=5; i<=n; i++){
        number*=i;
        
    }
    cout<<number;
}
