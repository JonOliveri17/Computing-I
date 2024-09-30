/*
 Date: 12/12/2023
 Purpose: Merges two seperate files of integers into a greater list in an output file
 
 Sources of Help: No one
 Time Spent: 1 hour
 */

#include <stdio.h>
#include <stdlib.h>

void mergeFiles(FILE* FirstFile, FILE* SecondFile, FILE* OutputFile);

int main (int argc, char * argv[])
{
    FILE* FirstFile = fopen("numbers1.txt", "r");
    FILE* SecondFile = fopen("numbers2.txt", "r");
    FILE* OutputFile = fopen("output.txt", "w");
    
    if(FirstFile == NULL || SecondFile == NULL || OutputFile == NULL)
    {
        printf("Error opening file, exiting now");
        exit(1);
    }
    
    mergeFiles(FirstFile, SecondFile, OutputFile);
    
    fclose(FirstFile);
    fclose(SecondFile);
    fclose(OutputFile);
    
    return 0;
}

void mergeFiles(FILE* FirstFile, FILE* SecondFile, FILE* OutputFile)
{
    int num;
    int num2;
    
    int numFromFirstFile = fscanf(FirstFile, "%d", &num);
    int numFromSecondFile = fscanf(SecondFile, "%d", &num2);
    
    
    
    
    
    while(numFromFirstFile == 1 && numFromSecondFile == 1)
    {
        
        
        
        if(numFromFirstFile < numFromSecondFile)
        {
            fprintf(OutputFile, "%d\n", numFromFirstFile);
            numFromFirstFile = fscanf(FirstFile, "%d", &num);
        }
        
        
        
        
        else
        {
            fprintf(OutputFile, "%d\n", numFromSecondFile);
            numFromSecondFile = fscanf(SecondFile, "%d", &num2);
        }
        
        
        
        
    }
    
    
    
    while(numFromFirstFile == 1)
    {
        fprintf(OutputFile, "%d\n", numFromFirstFile);
        numFromFirstFile = fscanf(FirstFile, "%d", &num);
    }
    
    
    
    while(numFromSecondFile == 1)
    {
        fprintf(OutputFile, "%d\n", numFromSecondFile);
        numFromSecondFile = fscanf(FirstFile, "%d", &num2);
    }

}
