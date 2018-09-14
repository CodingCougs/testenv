#include<stdio.h>
#include "roleCall.h"

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
