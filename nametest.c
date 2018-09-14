#include<stdio.h>

int main()
{
    char userInput;
    
    printf("Do you want to see the list of names? Enter y for yes and n for no: ");
    
    scanf("%c", &userInput);
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


int main(){

    switch (userInput)
    {
        case 'y':
            printf("Hello\n");
            printf("Ryan Breitenfeldt\n");
            printf("Manny Bonilla\n");
            printf("Bobby Thompson\n");
            printf("Micheal Roper\n");
            printf("chris burry\n");
            break;
        case 'n':
            printf("Thats alright, I didn't want to tell you anyways!\n");
            break;  
        default:
            printf("Your keyboard-fu needs some work. You entered something wrong.\n");
            break;
    }
// Add new student names to roleCall function.
void roleCall();
roleCall();


    // create a print statement with your name;
    // Use commit and create a comment
    // push to repo
    // wait for changes to master then pull and see the changes

    return 0;
}
