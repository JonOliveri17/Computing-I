//
//  Daily 12.c
//  Day #12
//
//  Created by Jonathan Oliveri on 10/25/23.
//
/*
 Author: Jonathan Oliveri
 Date: 10/26/2023
 
 Purpose: Allow the user to play a game of rock, paper, scissors and if they enter an invalid statement say that its invalid and let them continue if they would like
 Time Spent: 1 hour 25 minutes
 
 
 
 
 */




#include <stdio.h>

void startgame(void);
void clear_keyboard_buffer(void);
int user_wishes_to_continue(void);
char getInput(void);
void declareWinner(char FirstuserInput, char SeconduserInput);




int main(int argc, char* argv[])
{
    do
    {
        startgame();
        
    } while (user_wishes_to_continue());
    
    return 0;
}


void startgame(void)
{
    char FirstuserInput;
    char SeconduserInput;
    
    printf("Player-1 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:");
    FirstuserInput = getInput();
    
    printf("Player-2 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:");
    SeconduserInput = getInput();
    
    
    
    declareWinner(FirstuserInput, SeconduserInput);
    return;
}



char getInput(void)
{
    char userInput;
    int noc;
    noc = scanf("%c", &userInput);
    
    while (!(userInput == 'p' || userInput == 'P' || userInput == 'r' || userInput == 'R' ||userInput == 's' ||userInput == 'S' ))
    {
        printf("Sorry, but you have to enter 'r', 'p', or 's'\nPlease enter your choice (p)aper, (r)ock, or (s)cissors: ");
        noc = scanf("%c", &userInput);
        clear_keyboard_buffer();
    }
    clear_keyboard_buffer();
    return userInput;
    
}

void declareWinner(char FirstuserInput, char SeconduserInput)
{
    if ((FirstuserInput == 'r' || FirstuserInput == 'R') && (SeconduserInput == 's' || SeconduserInput == 'S'))
    {
        printf("Rock breaks scissors. Player 1 wins!\n");
    }
    
    else if ((FirstuserInput == 's' || FirstuserInput == 'S') && (SeconduserInput == 'r' || SeconduserInput == 'R'))
    {
        printf("Rock breaks scissors. Player 2 wins!\n");
    }
    
    else if ((FirstuserInput == 'r' || FirstuserInput == 'R' ) && (SeconduserInput == 'p' || SeconduserInput == 'P'))
    {
        printf("Paper covers rock. Player 2 wins!\n");
    }
    
    else if ((FirstuserInput == 'p' || FirstuserInput == 'P' ) && (SeconduserInput == 'r' || SeconduserInput == 'R'))
    {
        printf("Paper covers rock. Player 1 wins!\n");
    }
    
    else if ((FirstuserInput == 's' || FirstuserInput == 'S' ) && (SeconduserInput == 'p' || SeconduserInput == 'P'))
    {
        printf("Scissors cut paper. Player 1 wins!\n");
    }
    
    else if ((FirstuserInput == 'p' || FirstuserInput == 'P' ) && (SeconduserInput == 's' || SeconduserInput == 'S'))
    {
        printf("Scissors cut paper. Player 2 wins!\n");
    }
    
    else
    {
        printf("Draw, nobody wins\n");
    }
    
}




int user_wishes_to_continue(void)
{
    char c = 'a';
    
    printf("Do you wish to continue (Y/N)? : ");
    scanf("%c", &c);
    clear_keyboard_buffer();
    
    while (c != 'Y' && c != 'y' && c != 'n' && c != 'N')
    {
        printf("I'm sorry but you must enter either 'y' or 'n'\nDo you wish to continue (Y/N)? : ");
        scanf("%c", &c);
        clear_keyboard_buffer();
        
    }
    
    return (c == 'y' || c == 'Y');
    
}

void clear_keyboard_buffer(void)
{
    char c = 'a';
    while (c != '\n')
    {
        scanf("%c", &c);
    }
    
}
