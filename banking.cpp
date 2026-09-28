#include<iostream>

int pin=1234;
int user_pin=0000;
int user_intent=0;
long balance=1000;

double deposite(){
long user_deposit=0;
    std::cout<<"Enter your deposit amount\n";
    std::cin>>user_deposit;
    if (user_deposit<=0){
        std::cout<<"Invalid option!!";
    }
    else{
        balance = balance + user_deposit;
    }
    return balance;
}
double withdraw(){
    long user_withdraw=0;
    std::cout<<"Enter your withdraw amount\n";
    std::cin>>user_withdraw;
    if (user_withdraw<=0){
        std::cout<<"invalid option!!!";
    }
    else {
        balance = balance - user_withdraw;
        if (user_withdraw<balance){
        std::cout<<"Not enough balance\n";
        }
        else{
            std::cout<<"Your balance is"<<balance<<"\n";
        }
    }
    
    return balance;
}



int main(){
    std::cout<<"===========SUKRITS VERY BAD BANK===========\n";
    std::cout<<"Please enter your pin to enter the menu =";
    std::cin>>user_pin;
    if (user_pin!=pin){
        std::cout<<"Incorrect pin!!!! \n";
    }
    else{
        
        std::cout<<"1-Check Balance\n";
        std::cout<<"2-Deposite money\n";
        std::cout<<"3-Withdraw money\n";
        std::cout<<"Welcome!! Please selct your options=";
        std::cin>>user_intent;
        switch(user_intent){
            case 1:
            std::cout<<"Balance is" <<balance<<"\n";
            break;

            case 2:
            deposite();
            std::cout<<"Your balance is"<<balance<< "\n";
            break;

            case 3:
            withdraw();
            break;

            default:
            std::cout<<"Not a valid option";


        }
    }
    return 0;
}

