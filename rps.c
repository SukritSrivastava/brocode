#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int rock;
    int paper;
    int scissors;
    int your_choice;


    int computer_choice = rand() % 3; // Generate a random number between 0 and 2 for the computer's choice
    printf("0=rock \n1=paper\n2=scissors\n");
    printf("******ENTER YOUR CHOICE******\n");
    
    scanf("%d", &your_choice);

    if (computer_choice ==  your_choice){
        printf("its a tie\n");
    }
    else if (computer_choice==0 && your_choice==1){
        printf("You choose paper and computer choose rock SO U WIN\n");

    }
    else if (computer_choice==0 && your_choice==2){
        printf("You choose scissors and computer choose rock U LOST \n");
    }
    else if (computer_choice==1 && your_choice==0){
        printf("Computer choose paper and you choose rock U LOST \n");
    }
    else if (computer_choice==1 && your_choice==2){
        printf("Computer choice is paper and your choice is scissors U WON\n");
    }
    else if (computer_choice==2 && your_choice==0){
        printf("Compuer choice is scissors and u choose rock U WON \n");
    }
    else if (computer_choice==2 && your_choice==1){
        printf("Compuer choice scissors and u choose paper U LOST \n");
    }
printf("Thanks for playing my nigga ass game");

    

    return 0;
}