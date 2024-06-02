#include<iostream>
using namespace std;
#include<time.h>
int main(){
    srand(time(0));
    double random_number= rand();
    cout<<"random_guessed_number: "<<random_number<<endl;

    int user_choice;

    while(true){
        cout<<"user_guess: ";
        cin>>user_choice;
        if(user_choice>random_number){
            cout<<"TOO HIGH"<<endl;
        }
        else if(user_choice<random_number){
            cout<<"TOO LOW"<<endl;
        }
        else{
            cout<<"user choice is correct"<<endl;
            break;
        }

    }
    return 0;
}