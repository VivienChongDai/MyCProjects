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
// V1
    // Demostrate the string indexing. User repeatly input a string 
    // and retrieve a character at a specific position
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

//V2
    // Demostrate the string length measuring. User input a string and the program
    // displays the length of the string. 
    printf("*** Satrt of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE];// buffer to store the input
    // user will be asked to input a string repeatedly
    do{
        printf("Type a string (q - to quit):\n");//// Prompt user to input a string
        fgets(buffer2, BUFFER_SIZE, stdin);
        //Remove a newline character at the end of the input 
        buffer2[strlen(buffer2)-1] = '\0';
        // Print out message to tell user the length of input string
        if (strcmp(buffer2, "q") != 0)
            printf("The length of \'%s\' is %d characters\n",buffer2, (int)strlen(buffer2));
    }while (strcmp(buffer2, "q") != 0); // Check if the input is not equal to "q" to continue the loop
    printf("*** End of Measuring Strings Demo ***\n\n");

//V3
    //Demostrate how to copy strings from a source to a destination 
    printf("*** Start of Copying String demo ***\n");
    char destination[BUFFER_SIZE];// copy user's input to this destination
    char source[BUFFER_SIZE];// store user's input
    do{
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");// reset the destination empty
        printf("Type the source string (q - to quit):\n");// prompt user for a source string
        fgets(source, BUFFER_SIZE, stdin);//read user input
        source[strlen(source) - 1] = '\0';//remove newline character
        //copy the source to destination as long as input is not "q"
        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);
            printf("New destination string is \'%s\'\n", destination);    
        }
    }while (strcmp(source, "q") != 0);//continues until the user enters 'q' to quit
    printf("*** End of Coping Strings Demo ***\n\n");

}