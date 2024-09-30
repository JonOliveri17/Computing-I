//
//  Daily14.c
//  Day 14
//
//  Created by Jonathan Oliveri on 10/30/23.
/*
 Author: Jonathan Oliveri
 Date: 10/30/2023
 
 Purpose: Setting up for later code, but also giving the user the ability to convert lengths, and weights by entering numbers 1 and 2, and being able to exit whenever
 Source of Help: Myself
 Time Spent: 45 minutes
 */
#define _CRT_SECURE_NO_WARNINGS
void convert_lengths(void);
void convert_weights(void);

#include <stdio.h>

int main(int argc, char* argv[])
{
    int choice;
    
    do
    {
        printf("Please choose an option (0, 1, or 2) from the following:\n");
        printf("(1) Convert Lengths\n");
        printf("(2) Convert Weights\n");
        printf("(0) Exit the program\n");
        
        printf("Enter your choice here: ");
        scanf("%d", &choice);
        
        
        switch(choice)
        {
            case 1:
                convert_lengths();
                break;
            case 2:
                convert_weights();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid Choise, try again!\n");
        }
    
    }while(choice != 0);
    
    return 0;
}

void convert_lengths(void)
{
    printf("Length conversion complete\n");
}

void convert_weights(void)
{
    printf("Weight conversion complete\n");
}
