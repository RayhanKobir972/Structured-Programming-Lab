#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
void calculateVote(int vote);
void votingResult();
int Shahin=0, Lubaba=0, Joy=0, Johir=0;
////Main Function
int main()
{

    int choose;

        printf("*********Welcome to the voting system project*********\n\n");
        printf("                        CR election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.Shahin             |          2.Lubaba         |\n");
        printf("*************************************************************\n");
        printf("|           3.Joy                |          4.Johir          |\n");
        printf("*************************************************************\n\n");

    do
    {
        printf("Press 1 to vote Shahin\n");
        printf("Press 2 to vote Lubaba\n");
        printf("Press 3 to vote Joy\n");
        printf("Press 4 to vote Johir\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if(choose==1 || choose==2 || choose==3 || choose==4 ||choose==5 || choose > 5){
            system ("cls");
        }
        if(choose>5){
            system ("color 04");
            printf("Invlid Choose  \nPlease Check valid Input");
        }
        else if (choose==5)
        {
            system ("color 01");
            votingResult();
        }
        else
        {
            system ("color 07");
            calculateVote(choose);
        }
        printf("\n");
    } while (choose != 5);

    return 0;
}

///code for calculate vote
void calculateVote(int vote)
{

    switch (vote)
    {
    case 1:
        Shahin+=1;
        break;
    case 2:
        Lubaba+=1;
        break;
    case 3:
        Joy+=1;
        break;
    case 4:
        Johir+=1;
        break;
    }
}


///code for result vote
void votingResult()
{
    char username[30];
    char password[12];
    printf("Enter your surname:\n");
    scanf("%s",&username);
    printf("Enter your password:\n");
    scanf("%s",&password);
    if(strcmp(username,"Mentor")==0 && strcmp(password,"123")==0){
        printf("\nWelcome.Login Success!");
        int wonByVote;
        if(Shahin == Lubaba && Shahin == Joy && Shahin == Johir)
        {
            printf("\nNo one won the election\n\n");
            printf("            Shahin---Lubaba---Joy---Johir\n");
            printf("Total Vote   %d       %d        %d     %d\n",Shahin,Lubaba,Joy,Johir);
        }
        else if (Shahin > Lubaba && Shahin > Joy && Shahin > Johir)
        {
            printf("\n***Shahin won the election***\n\n");
            printf("Total vote of Shahin : %d\n",Shahin);
            wonByVote=Shahin-Lubaba;
            printf("Shahin won by %d votes to Lubaba\n",wonByVote);
            wonByVote=Shahin-Joy;
            printf("Shahin won by %d votes to Joy\n",wonByVote);
            wonByVote=Shahin-Johir;
            printf("Shahin won by %d votes to Johir\n",wonByVote);
        }
        else if (Lubaba > Joy && Lubaba > Johir)
        {
            printf("\n***Lubaba won the election***\n\n");
            printf("Total vote of Lubaba : %d\n",Lubaba);
            wonByVote=Lubaba-Shahin;
            printf("Lubaba won by %d votes to Shahin\n",wonByVote);
            wonByVote=Lubaba-Joy;
            printf("Lubaba won by %d votes to Joy\n",wonByVote);
            wonByVote=Lubaba-Johir;
            printf("Lubaba won by %d votes to Johir\n",wonByVote);
        }
        else if (Joy > Johir)
        {
            printf("\n***Joy won the election***\n\n");
            printf("Total vote of Joy : %d\n",Joy);
            wonByVote=Joy-Lubaba;
            printf("Joy won by %d votes to Lubaba\n",wonByVote);
            wonByVote=Joy-Shahin;
            printf("Joy won by %d votes to Shahin\n",wonByVote);
            wonByVote=Joy-Johir;
            printf("Joy won by %d votes to Johir\n",wonByVote);
        }
        else
        {
            printf("\n***Johir won the election***\n\n");
            printf("Total vote of Johir : %d\n",Johir);
            wonByVote=Johir-Lubaba;
            printf("Johir won by %d votes to Lubaba\n",wonByVote);
            wonByVote=Johir-Joy;
            printf("Johir won by %d votes to Joy\n",wonByVote);
            wonByVote=Johir-Shahin;
            printf("Johir won by %d votes to Shahin\n",wonByVote);
        }
    }
    else{
    printf("\nInvalid User Login");
    }
}
