# include <bits/stdc++.h>
using namespace std;
int main (){
    int n,s;
    cin >> n>> s;
    switch (n) {
        case 1: switch (s) {
   	        case 11: cout << "west"; break;
   		    case 12: cout << "south"; break;  
   		    case 13: cout << "east"; break;
   		    case 14: cout << "north"; break;
   	    } break ;
		case -1: switch (s) {
   			case 11: cout << "east"; break;
   			case 12: cout << "south"; break;  
   			case 13: cout << "west"; break;
   	    	case 14: cout << "north"; break;
		} break;
		case 0: switch (s) {
   			case 11: cout << "north"; break;
   			case 12: cout << "west"; break;  
   			case 13: cout << "south"; break;
   	    	case 14: cout << "east"; break;
		} break;
   }   
}
