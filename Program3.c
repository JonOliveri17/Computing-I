/*
 Author: Jonathan Oliveri
 Course: COMP1010, Computing I
 Date: 11/29/2023
 Description: Find and print the averages of the students averages and their names within the specified parameters

 */

#include <stdio.h>
#include <stdlib.h>

void getScoreAverage(FILE* UserInputFile, FILE *UserOutputFile);
void getName(FILE* file, char* first, char* last);



int main(int argc, char * agrv[])
{
    FILE *UserInputFile;
    FILE *UserOutputFile;
    
    UserInputFile = fopen("quiz.txt", "r");  //opens quiz file
    UserOutputFile = fopen("average.txt", "w");  //opens average file
    
    if(UserInputFile == NULL)  //Checks to see if opened corrrectly
    {
        printf("Error: Couldn't open File! \n");
        exit(1);
    }
    
    if(UserOutputFile == NULL) //Checks to see if opened corrrectly
    {
        printf("Error: Couldn't open File! \n");
        exit(1);
    }
    
    //heading
    fprintf(UserOutputFile, "%-4s%-4s%-4s%-4s%-4s%-4s%-4s%-4s%-4s%-4s%-4s%-10s\n", "Last Name First Name","  Q1"," Q2"," Q3"," Q4"," Q5"," Q6"," Q7"," Q8"," Q9"," Q10","      Average");
    
    getScoreAverage(UserInputFile, UserOutputFile); //computing the average from the files

    
    fclose(UserInputFile); //closing UserInputFile and UseroutputFile these two lines
    fclose(UserOutputFile);
    
    //used to copy the inputs from average to quiz file
    UserInputFile = fopen("quiz.txt", "w");
    UserOutputFile = fopen("average.txt", "r");
    
    if(UserInputFile == NULL)  //Checks to see if opened corrrectly
    {
        printf("Error: Couldn't open File! \n");
        exit(1);
    }
    
    if(UserOutputFile == NULL) //Checks to see if opened corrrectly
    {
        printf("Error: Couldn't open File! \n");
        exit(1);
    }
    int character;
    while((character = fgetc(UserOutputFile)) != EOF) // copying from output file to input file
    {
        fputc(character, UserInputFile);
    }
   
    fclose(UserInputFile); //closing files again
    fclose(UserOutputFile);
    
    
    
    
    return 0;
}

//Use this to write the names of the students to UserOutputFile
void getName(FILE* file, char* firstName, char* lastName)
{
    fscanf(file, "%s %s", firstName, lastName); //getting name from the file
    
}

//compute scores/averages from the UserInputFile file
void getScoreAverage(FILE* UserInputFile, FILE *UserOutputFile)
{
    char firstName[20];
    char lastName[20];
    int ScoreMax = 10;
    int score[10];
    
    
    
    while(fscanf(UserInputFile, "%s %s", firstName, lastName) != EOF)
    {
        fprintf(UserOutputFile, "%-10s", lastName);  // prints the last name
        fprintf(UserOutputFile, "%-10s", firstName); // prints the first name
        
        int sum = 0; // for finding total scores combined
        int count = 0; // used for inrementation
        
        for(int i = 0; i< ScoreMax; i++)
        {
            if(fscanf(UserInputFile, "%d", &score[i]) == 1)
            {
                fprintf(UserOutputFile, "%4d", score[i]);
                sum += score[i];
                count++;
            }
            else
            {
                fprintf(UserOutputFile, "%4s", ""); // prints an empty space if missing quiz grades
            }
        }
        
        float average = (float)sum/ScoreMax;  //finding the average
        fprintf(UserOutputFile, "%2s", "");
        fprintf(UserOutputFile, "%10.2f\n", average); //Writes average score over to the UserOutputFile
    }
}
    
