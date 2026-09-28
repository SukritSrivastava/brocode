#include<iostream>

int main(){
    int choice=0;

    std::cout<<"=====DAY OF THE WEEK=====\n";
    std::cout<<"Enter which day of week do u want = ";
    std::cin>> choice;

    switch(choice){
        case 1:
        std::cout<<"Monday";
        break;
        case 2:
        std::cout<<"Tuesday";
        break;
        case 3:
        std::cout<<"Wednesday";
        break;
        case 4:
        std::cout<<"Thursday";
        break;
        case 5:
        std::cout<<"Friday";
        break;
        case 6:
        std::cout<<"Saturday";
        break;
        case 7:
        std::cout<<"Sunday";
        break;
        default:
        std::cout<<"Please enter a valid value";

    }
}