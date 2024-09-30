/*
 Author: Jonathan Oliveri
 Date: 11/14/2023
 
 Time Spent: 2 hours 20 minutes
 Purpose: Allow the to figure out the total population (in pounds) after recieving the inital population and number of day, figuring it out using a form of Fibonacci numbers.
 */

#include <stdio.h>
#include <stdlib.h>


int calculating_crud_population(int initial_size_of_population, int number_of_days);
int user_wishes_to_continue(void);
void clear_keyboard_buffer(void);
int prompt_the_user(void);

int main(int argc, char* argv[])
{

    
    do
    {
        prompt_the_user();
    } while (user_wishes_to_continue());
    
    return 0;
}



int calculating_crud_population(int initial_size_of_population, int number_of_days)
{
    int first_number_in_sequence = 0;
    int second_number_in_sequence = 1;
    int next_number_coming_up_in_sequence = 1;
    
    if (number_of_days == 0)
    {
        return initial_size_of_population;
    }
    
    for (int i = 2; i<= number_of_days / 5 + 1; i++)
    {
        next_number_coming_up_in_sequence = first_number_in_sequence + second_number_in_sequence;
        
        first_number_in_sequence = second_number_in_sequence;                 //rotates to the next numbers by setting the 1st number
                                                                              //to the 2nd number, & the 2nd number to the next one
        second_number_in_sequence = next_number_coming_up_in_sequence;
    }
    
    
    return initial_size_of_population * next_number_coming_up_in_sequence;
}

int prompt_the_user(void)
{
    int number_of_days;
    int initial_size_of_population;
    int total_population;
    int noc;
    
    printf("Please enter the initial size of the green crud: ");
    noc = scanf("%d", &initial_size_of_population);
    clear_keyboard_buffer();
    
    if(noc !=1 || initial_size_of_population < 0)
    {
        printf("I'm sorry, that value is unrecognized or negative.\n");
        return 0;
    }
    
    printf("Please enter the number of days: ");
    noc = scanf("%d", &number_of_days);
    clear_keyboard_buffer();
    
    if(noc !=1 || number_of_days < 0)
    {
        printf("I'm sorry, that value is unrecognized or negative.\n");
        return 0;
    }
    
    total_population = calculating_crud_population(initial_size_of_population, number_of_days);
    
    printf("With an initial population of %d pounds of crud growing for %d days, the final population would be %d.\n", initial_size_of_population, number_of_days, total_population);
        
    
    
    return 0;
}


int user_wishes_to_continue(void)
{
    
    char c = 'a';
    
    
    printf("Do you wish to continue (Y/N)? : ");
    scanf("%c", &c);
    clear_keyboard_buffer();
    
    while (c != 'Y' && c != 'y' && c != 'n' && c != 'N')
        
    {
        printf("I'm sorry that answer is unrecognized.\nDo you wish to continue (Y/N)? : ");
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
