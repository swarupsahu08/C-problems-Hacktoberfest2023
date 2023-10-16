//program to print all alphabet from z to a using all three C language loops (while, DO While and For Loop)

#include<stdio.h>
int main()
{
    //Using while loop
    char current_char='z';
    printf("Using while loop: \n");

    while (current_char>='a')
    {
        printf("%c ", current_char);
        current_char--;
    }
    printf("\n");

    //Using do while loop
    char current_letter='z';
    printf("Using do-while loop: \n");
    do
    {
        printf("%c ",current_letter);
        current_letter--;
    } while (current_letter>='a');

    printf("\n");

    //Using for loop
    char initial='z';
    char final='a';
    printf("Using for loop:\n");

    for (char c = initial; c >= final; c--)
    {
        printf("%c ",c);
    }
    
    printf("\n");

    return 0;
}