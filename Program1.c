//
//  Program1.c
//  Program 1
//
//  Created by Jonathan Oliveri on 11/2/23.
//
/*
 Author: Jonathan Oliveri
 Date: 11/02/2023
 
 Purpose: The program computes how many total steps it took to get the values to reach value 1 between the starting and ending values
 Time Spent: 2 hour
 Help: Anthony Bui helped me out with the print_output method and with the %5 stuff, couldn't figure out how to print it correctly
 
 P.S: Sorry for the late submission, but I wasn't in class the day we talked about this so I didn't knwo it was due til yesterday
 */


#include <stdio.h>

int collatz_function(int number);
void print_output(int beginning, int end);





int main (int argc, char* argv[])
{
    int beginning, ending;
    
    printf("Enter a staring point: ");
    scanf("%d", &beginning);
    
    if(beginning <=1 || beginning >= 1000)
    {
        printf("Invalid beginning, please try again (between 1 - 1000)");
        return 1;
    }
    
    else
    {
        printf("Enter an ending point: ");
        scanf("%d", &ending );
    }
    
    if(ending <= beginning  || ending >= 10000)
    {
        printf("Invalid beginning, please try again (between the starting integer and 10000)");
        return 1;
    }
    
    else
    {
        printf("\n");
        print_output(beginning, ending);
        
    }

    return 0;
}

int collatz_function(int num)
{
    int num_of_steps = 0;
    while (num != 1)
    {
        if (num % 2 == 1)
        {
            num = 3* num + 1;
        }
        else
        {
            num = num / 2;
        }
        num_of_steps++;
    }
    return num_of_steps;
}

void print_output(int beginning, int ending)
{
    int num_of_steps = 0;
    int count = 0;
    for(int i = beginning; i <= ending; i ++)
        {
            num_of_steps = collatz_function(i);
            printf("%5d:%-5d\t", i, num_of_steps);
            count++;
            
            if(count == 7)
            {
                printf("\n");
                count = 0;
            }
        }
}


