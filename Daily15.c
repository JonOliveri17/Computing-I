//
//  Daily15.c
//  Day 15
//
//  Created by Jonathan Oliveri on 11/2/23.
//
/*
 Author: Jonathan Oliveri
 Date: 11/02/2023
 
 Purpose: Allow the user to convert from one system to the other cleanly
 Time spent: 45 minutes
 Help: Chat gpt to help with certain formatting issues and a little bit of debugging.
 */

#include <stdio.h>

void length_to_metric(void);
void length_to_us(void);
void weight_to_metric(void);
void weight_to_us(void);
void convert_lengths(void);
void convert_weights(void);


int main(int argc, char* argv[])
{
    int choice;
    
    printf("Please choose an option (0, 1, or 2) from the following:\n");
    printf("(1) Convert Lengths\n");
    printf("(2) Convert Weights\n");
    printf("(0) Exit the program\n");
    
    printf("Enter your choice here: ");
    scanf("%d", &choice);
    
    
    do
    {

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
                printf("Invalid Choice, try again!\n");
        }
    
    }while(choice != 0);
    
    return 0;
}

void length_to_metric(void)
{
    printf("\n");
    printf("Converting the length to metric conversion\n");
    printf("\n");
}

void length_to_us(void)
{
    printf("\n");
    printf("Converting the length to us conversion\n");
    printf("\n");
}
void weight_to_metric(void)
{
    printf("\n");
    printf("Converting the weight to metric conversion\n");
    printf("\n");
}
void weight_to_us(void)
{
    printf("\n");
    printf("Converting the weight to us conversion\n");
    printf("\n");
}


void convert_lengths(void)
{
    int choice1;
    
    printf("Choose which length conversion you want to complete (0, 1, or 2):\n");
    printf("(1) FEET/INCHES to METERS/CENTIMETERS\n");
    printf("(2) METERS/CENTIMETERS to FEET/INCHES\n");
    printf("(0) Exit out\n");
    
    printf("Which option will you choose: ");
    scanf("%d", &choice1);
    
    
    while (choice1 != 0)
    {
       
        switch (choice1)
        {
            case 1:
                length_to_metric();
                break;
            case 2:
                length_to_us();
                break;
            case 3:
                printf("Returning back to 1st question\n ");
                break;
            default:
                printf("Invalid Choice, try again!\n");
        }
        
    }
    
}

void convert_weights(void)
{
    int choice1;
    
    printf("Choose which weight conversion you want to complete (0, 1, or 2):\n");
    printf("(1) POUNDS/OUNCES to KILOGRAMS/GRAMS\n");
    printf("(2) KILOGRAMS/GRAMS to POUNDS/OUNCES\n");
    printf("(0) Exit out\n");
    
    printf("Which option will you choose: ");
    scanf("%d", &choice1);
    
    while (choice1 != 0)
    {
        
        switch (choice1)
        {
            case 1:
                weight_to_metric();
                break;
            case 2:
                weight_to_us();
                break;
            case 3:
                printf("Returning back to 1st question.\n ");
                break;
            default:
                printf("Invalid Choice, try again!\n");
        }
        
    }
    
}
