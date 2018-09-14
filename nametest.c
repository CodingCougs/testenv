#include<stdio.h>
void roleCall();
/*@function roleCall prints students name in aphabetical order to screen when function is called. */
void roleCall()
{
    printf("Names of students using Github and working on nametest.c:\n");
    printf("Bobby Thompson\n");
    printf("Chris Burry\n");   
    printf("Manny Bonilla\n");
	printf("Micheal Roper\n");
    printf("Ryan Breitenfeldt\n");
}


int main()
{
    char userInput;
    
    switch (userInput)
    {
        case 'y':
            roleCall();
            break;
        case 'n':
            printf("Thats alright, I didn't want to tell you anyways!\n");
            break;  
        default:
            printf("Your keyboard-fu needs some work. You entered something wrong.\n");
            break;
    }
}
