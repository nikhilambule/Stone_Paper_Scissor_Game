//                 Project 2: Stone_Paper_Scissor
// Write a C Program capable of playing this game with the you
// Program should print his random result against the option choosen by you

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>


    int G_algorythm(char com, char you);


    int main(){
    int n,result;
    char com, you;
    srand(time(0));
    n=(rand()%100)+1;
    if(n<33){com='s';}
    else if(33<n<66){com='p';}
    else{com='r';}
    printf("\t\t\t\t\t\n\n*****Stone*****Paper*****Scissor*****\nHey! Welcome to this wonderful #Childhood Game\n");
    printf("Please Type:\n's' for Stone\n'p' for Paper\n'r' for Scissor\n");
    scanf("%s",&you);
    result=G_algorythm(com, you);
    printf("\nComputer's Choice: %c \nYour Choice: %c",com,you);
    if(result==0){printf("\nGame Draw!\n");}
    if(result==1){printf("\nYou Won!\n");}
    if(result==-1){printf("\nYou Loose!\n");}
    printf("**********Thankyou! Play Again and Have Fun!***********");
    getch();
return 0;
}

int G_algorythm(char com, char you){

//ss  pp  rr
if(com==you){return 0;}
//sp_ps  sr_rs   pr_sr
if(com=='s' && you=='p'){return 1;}
if(com=='p' && you=='s'){return -1;}
if(com=='s' && you=='r'){return -1;}
if(com=='r' && you=='s'){return 1;}
if(com=='p' && you=='r'){return 1;}
if(com=='r' && you=='p'){return -1;}

}