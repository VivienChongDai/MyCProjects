#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE      80
#define NUM_INPUT_SIZE   10
#include "fundamentals.h"

int main(void)
{
    fundamentals();
    return 0;
}

void fundamentals(void)
{
     // Demostrate the string indexing. User input a string and retrieve a character 
    // at a specific position
    // V1
    printf("*** Start of Indexing Strings Demo ***\n");
    char    buffer1[BUFFER_SIZE];
    char    numInput[NUM_INPUT_SIZE];
    size_t  position; 
    //Prompt user for strings and positions repeated until user input "q"
    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);// prompt user for string input
        buffer1[strlen(buffer1) - 1] = '\0';
        if (strcmp(buffer1, "q") != 0) // as long as user doesn't input q, execute the code block 
        {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);//prompt user for a number which is the index for buffer1
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            // if position if out of bounds, adjust it to the max position
            if (position >= strlen(buffer1)) 
            {
                position = strlen(buffer1) - 1;
                //if user's number input is out of buffer1's bounds, give a message to explain 
                printf("Too big... Position reduced to max. available\n");
                
            }
            // show user the charcter in the requested or max position
            printf("The character found at %d position is \'%c\'\n",
                   (int)position, buffer1[position]);
            
        }
    } while (strcmp(buffer1, "q") != 0);// repeat until user inputs q
    printf("*** End of Indexing Strings Demo ***\n\n");
}