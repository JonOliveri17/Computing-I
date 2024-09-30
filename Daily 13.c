//
//  Daily 13.c
//  Day #13
//
//  Created by Jonathan Oliveri on 10/26/23.
//
/*
 Author: Jonathan Oliveri
 Date: 10/26/2023
 
 Purpose: Allow the players to play a round of rock paper scissors, but instead of using if statements for all the characetrs, make it easier to understand by using enums
 Time Spent: 30 minutes
 
 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum Choice {ROCK, PAPER, SCISSORS};
void startgame(void);
void clear_keyboard_buffer(void);
int user_wishes_to_continue(void);
enum Choice getInput(void);
void declareWinner(enum Choice FirstuserInput, enum Choice SeconduserInput);




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
    enum Choice FirstuserInput;
    enum Choice SeconduserInput;
    
    printf("Player-1 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:");
    FirstuserInput = getInput();
    
    printf("Player-2 it is your turn!\nPlease enter your choice (p)aper, (r)ock, or (s)cissors:");
    SeconduserInput = getInput();
    
    
    
    declareWinner(FirstuserInput, SeconduserInput);
    return;
}



enum Choice getInput(void)
{
    char userInput;
    int noc;
    noc = scanf("%c", &userInput);
    clear_keyboard_buffer();
    
    while (!(userInput == 'p' || userInput == 'P' || userInput == 'r' || userInput == 'R' ||userInput == 's' ||userInput == 'S' ))
    {
        printf("Sorry, but you have to enter 'r', 'p', or 's'\nPlease enter your choice (p)aper, (r)ock, or (s)cissors: ");
        noc = scanf("%c", &userInput);
        clear_keyboard_buffer();
    }
    
    switch(userInput)
    {
            case 'r':
            case 'R':
            return ROCK;
            
            case 'p':
            case 'P':
            return PAPER;
            
            case 's':
            case 'S':
            return SCISSORS;
    }
    
    return ROCK;
}

void declareWinner(enum Choice FirstuserInput, enum Choice SeconduserInput)
{
    switch (FirstuserInput)
    {
        case ROCK:
            if(SeconduserInput == SCISSORS)
                printf("Rock breaks Scissors. Player 1 wins!\n");
            else if(SeconduserInput == PAPER)
                printf("Paper covers Rock. Player 2 wins!\n");
            else
                printf("Draw, nobody wins\n");
            break;
            
        case PAPER:
            if(SeconduserInput == SCISSORS)
                printf("Scissors cuts Paper. Player 2 wins!\n");
            else if(SeconduserInput == ROCK)
                printf("Papwe covers Rock. Player 1 wins!\n");
            else
                printf("Draw, nobody wins\n");
            break;
            
        case SCISSORS:
            if(SeconduserInput == ROCK)
                printf("Rock breaks Scissors. Player 2 wins!\n");
            else if(SeconduserInput == PAPER)
                printf("Scissors cuts Paper. Player 1 wins!\n");
            else
                printf("Draw, nobody wins\n");
            break;
            
        default:
            printf("Draw, nobody wins\n");
        break;
            
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

