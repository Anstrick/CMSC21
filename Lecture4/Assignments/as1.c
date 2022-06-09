#include <stdio.h>
#include <conio.h>
int main(void)
{
    //Intialization of Data Types
    int i;
    
    //Intial value assignment
    i = 1;

    //Loop for creation of factorials less than equal or equal to 128 
    while (i <= 128) {

        //Output of values
        printf("%d ", i);
        i *= 2;
    }
    
    //stops the program for closing immediately
    getch();
    return 0;
}