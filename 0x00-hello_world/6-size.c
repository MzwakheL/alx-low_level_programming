#include <stdio.h>

/**
 * main - print the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
    i; // use i for nothing
    (int)i; // convert the value of i to integer, than use that value for nothing
    (int)(float)i; // convert to float, then to int, then use for nothing
    (int)(float)(char)i; // convert char, then to float, then to int, then use for nothing
    printf("sizeof i is %d\n", (int)sizeof i);
    char i; // define a new i (and hide the previous one) of type char
    printf("sizeof i is %d\n", (int)sizeof i);
}

