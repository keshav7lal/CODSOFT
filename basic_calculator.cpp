#include<iostream>
using namespace std;
#include<cmath>

int main(){
    double num1,num2;
    char operations;
    cout<<"Enter 1st number: ";
    cin>>num1;
    
    cout<<"Enter 2nd number: ";
    cin>>num2;
    
    cout<<"Enter the operation: ";
    cin>>operations;
    switch(operations){
        case '+':{
            cout<<"ans: "<<num1+num2;
        break;
        }
        case '-':{
            cout<<"ans: "<<num1-num2;
            break;
        }
        case '*':{
            cout<<"ans: "<<num1*num2;
            break;
        }
        case '/': {
            if(num2==0){
                cout<<"divison is not possible as denominator is 0!"<<endl;
                break;
            }
            else{
                cout<<"ans: "<<num1/num2;
                break;
            }
        }
        default: {
            cout<<"Valid operation is not entered! "<<endl;
            
        }
        

    }
    return 0;
}