#include<stdio.h>
/**
*main - function of program
*Description: print the text without use printf, put
*Return: one
*/
int main(void)
{
char *word = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*word)
putchar (*word++);
return (1);
}
