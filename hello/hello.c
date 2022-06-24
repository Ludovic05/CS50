#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask the user for name and output the message "Hello" + "user's name"
    string name = get_string("What's your name? \n");
    printf("Hello, %s\n", name);
}