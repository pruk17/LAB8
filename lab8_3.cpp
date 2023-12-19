#include <iostream>
using namespace std;
int main(){
    int age, height, bounty;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100){
            cout << "Your character = Chopper";
            return 0;
        }
        else{
            if(height < 180){
                cout << "Your character = Usopp";
                return 0;
            }
            else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if (bounty > 1100000000){
                    cout << "Your character = Zoro";
                    return 0;
                }
                else{
                    cout << "Your character = Sanji";
                    return 0;
                }
            }
        }
    }
    else{
        if(age <= 60){
            cout << "Enter your bounty: ";
                cin >> bounty;
                if (bounty > 500000000){
                    cout << "Your character = Jinbe";
                    return 0;
                }
                else{
                    cout << "Your character = Franky";
                    return 0;
            }
        }
        else{
            cout << "Your character = Brook";
        }
    }
}


/*"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"*/