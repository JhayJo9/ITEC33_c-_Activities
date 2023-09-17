#include <iostream>
using namespace std;
int main()
{
    int math,pe,english,science,itec30;
    cout << "Math grade : ";
    cin >> math;
    cout << "Pe : ";
    cin >> pe;
    cout << "English : ";
    cin >> english;
    cout << "Science : ";
    cin >> science;
    cout << "ITEC30 : ";
    cin >> itec30;
    int val = math + pe + itec30+ english + science;  
      int ave = val / 5;
    
    cout << endl;
    
    cout << "Math : " << math << endl;
    cout << "Pe : " << pe << endl;
    cout << "English : " << english << endl;
    cout << "Science : " << science << endl;
    cout << "ITEC30 : " << itec30 << endl;
    
    if(ave >= 98){
        cout << ave << " is equivalent to 1.00"<< endl;
    }
    else if(ave >= 95){
        cout << ave << " is equivalent to 1.25"<< endl;
    }
    else if(ave >= 92){
        cout << ave << " is equivalent to 1.50"<< endl;
    }
    else if(ave >= 89){
        cout << ave << " is equivalent to 1.75"<< endl;
    }
    else if(ave >= 86){
        cout << ave << " is equivalent to 2.00"<< endl;
    }
    else if(ave >= 83){
        cout << ave << " is equivalent to 2.25"<< endl;
    }
    else if(ave >= 80){
        cout << ave << " is equivalent to 2.50"<< endl;
    }
    else if(ave >= 77){
        cout << ave << " is equivalent to 2.75"<< endl;
    }
    else if(ave >= 75){
        cout << ave << " is equivalent to 3.00"<< endl;
    }
    else{
        cout << ave <<" is equivalent to 5.00"<< endl;
    }
    
    switch(ave){
        
        case 100:
        case 99:
        case 98:
        cout << ave << " is equivalent to 1.00 "<< endl;
        break;
        case 97:
        case 96:
        case 95:
        cout << ave << " is equivalent to 1.25"<< endl;
        break;
        case 94:
        case 93:
        case 92:
        cout << ave << " is equivalent to 1.50"<< endl;
        break;
        case 91:
        case 90:
        case 89:
        cout << ave << " is equivalent to 1.75"<< endl;
        break;
        case 88:
        case 87:
        case 86:
        cout << ave << " is equivalent to 2.00"<< endl;
        break;
         case 85:
        case 84:
        case 83:
        cout << ave << " is equivalent to  2.         25"<< endl;
        break;
         case 82:
        case 81:
        case 80:
        cout << ave << " is equivalent to 2.50"<< endl;
        break;
        case 79:
        case 78:
        case 77:
        cout << ave << " is equivalent to 2.75" << endl;
        break;
        case 76:
        case 75:
        cout << ave << " is equivalent to 3.00"<< endl;
         break;
        case 74:
        cout << ave << "  is equivalent to 5.00"<< endl;
        break;
        default:
        cout << " Invalid"<< endl;
        break;
    }
}