//
//  Daily 10.c
//  Day 10
//
//  Created by Jonathan Oliveri on 10/4/23.
//
/*
 Author: Jonathan Oliveri
 Date: 10/04/2023
 Purpose: Repeat the prompt until a negative integer is added
 Time Spent: 1 hour
 */



#include <stdio.h>
void clear_keyboard_buffer(void);

int main(int argc, char * argv[])
{
    char c = 'a';
    int num;
    
    printf("Please enter a negative integer:");
    scanf("%d", &num);
    
    clear_keyboard_buffer();
    
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

