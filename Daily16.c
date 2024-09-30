/*
 Author: Jonathan Oliveri
 Date: 11/10/2023
 
 Purpose: Allow the user to effectively convert weights and lengths to different systems
 Time spent: 2 hours
 Help: None
 */

#include <stdio.h>

void length_to_metric(double feet, double inches);
void length_to_us(double meters, double centimeters);
void weight_to_metric(double pounds, double ounces);
void weight_to_us(double grams, double kilograms);

void us_weight(double* ounces, double* pounds);
void metric_weight(double* kilograms, double* grams);
void us_length(double* feet, double* inches);
void metric_length(double* meters, double* centimeters);

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
            {
                convert_lengths();
                break;
            }
                
            case 2:
            {
                convert_weights();
                break;
            }
            case 0:
            {
                printf("Exiting the program.\n");
                break;
            }
            default:
            {
                printf("Invalid Choice, try again!\n");
            }
        }
        printf("Enter your choice here: ");
        scanf("%d", &choice);
    
    }while(choice != 0);
    
    return 0;
}

void length_to_metric(double feet, double inches)
{
    double centimeters = 0.00;
    double meters = 0.00;
    
    us_length(&feet, &inches);
    
    meters = feet * 0.3048;
    centimeters = inches * 2.54 + (meters - (int)meters) * 100;
    
    printf("Conversion completed. Meters = %.2f, Centimeters = %.2f\n", meters, centimeters);
}

void length_to_us(double centimeters, double meters)
{
    double feet = 0.00;
    double inches = 0.00;
    
    metric_length(&meters, &centimeters);
    
    feet = meters / 0.3048;
    inches = centimeters / 2.54 + (feet - (int)feet) * 12;
 
    printf("Conversion completed. Feet = %.2f, Inches = %.2f\n", feet, inches);
    
}
void weight_to_metric(double pounds, double ounces)
{
    double kilograms = 0.00;
    double grams = 0.00;
    
    us_weight(&pounds, &ounces);
    
    kilograms = pounds / 2.2046;
    grams = ounces / 0.035274;
    
    printf("Conversion completed. Kilograms = %.2f, Grams = %.2f\n", kilograms, grams);
    
}
void weight_to_us(double grams, double kilograms)
{
    double pounds = 0.00;
    double ounces = 0.00;
    
    metric_weight(&grams, &kilograms);
    
    pounds = kilograms * 2.2046;
    ounces = grams * 0.035274;
    
    printf("Conversion completed. Pounds = %.2f, Ounces = %.2f\n", pounds, ounces);
}

void us_weight(double* ounces, double* pounds)
{
    printf("Please enter a WEIGHT in Pounds and or Ounces: ");
    scanf("%lf, %lf \n", ounces, pounds);
}

void metric_weight(double* kilograms, double* grams)
{
    printf("Please enter a WEIGHT in Kilograms and or Grams: ");
    scanf("%lf, %lf\n", kilograms, grams);
}

void us_length(double* feet, double* inches)
{
    printf("Please enter a LENGTH in Feet and or inches: ");
    scanf("%lf, %lf\n", feet, inches);
}

void metric_length(double* meters, double* centimeters)
{
    printf("Please enter a LENGTH in Meters and or centimeters: ");
    scanf("%lf, %lf\n", meters, centimeters);
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
            {
                double feet = 0.0, inches = 0.0, meters = 0.0, centimeters = 0.0;
                us_length(&feet, &inches);
                length_to_metric(meters, centimeters);
                break;
            }
            case 2:
            {
                double meters = 0.0, centimeters = 0.0, feet = 0.0, inches = 0.0;
                metric_length(&meters, &centimeters);
                length_to_us(feet, inches);
                break;
            }
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
            {
                double pounds = 0.0, ounces = 0.0, grams = 0.0, kilograms = 0.0;
                us_weight(&pounds, &ounces);
                weight_to_metric(grams, kilograms);
                break;
            }
            case 2:
            {
                double pounds = 0.0, ounces = 0.0, grams = 0.0, kilograms = 0.0;
                metric_weight(&kilograms, &grams);
                weight_to_us(pounds, ounces);
                break;
            }
            case 3:
                printf("Returning back to 1st question.\n ");
                break;
            default:
                printf("Invalid Choice, try again!\n");
        }
        printf("Which option will you choose: ");
        scanf("%d", &choice1);
        
    }
    
}
