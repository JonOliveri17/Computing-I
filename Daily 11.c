//
//  Daily 11.c
//  Day 11
//
//  Created by Jonathan Oliveri on 10/10/23.
//

/*
 Author: Jonathan Oliveri
 Date: 10/10/2023
 
 Purpose: Allow the user to input any amount of astericks between 1 and 79
 Time spent: 30 minutes
 */

#include <stdio.h>
void clear_keyboard_buffer(void);
int main(int argc, char * argv[])
{
    int x,output,noc;
    
    printf("Please enter the number of asterisks you want in your line: ");
    noc = scanf("%d", &output);
    while (noc == 0 || output > 79 || output < 1)
    {
        clear_keyboard_buffer();
        printf("I'm sorry, that number is unrecognized or out of range, try [1-79]: ");
        scanf("%d", &output);
        
    }

    for (x = 1; x <= output; x = x+1)
    {
        printf("*");
       
    }
    printf("\n");
    return 0;
}


void clear_keyboard_buffer(void)
{
    char c = 'a';
    while(c != '\n')
    {
        scanf("%c", &c);
    }
}


