#include <stdio.h>
#include <conio.h>
int main(void)
{
    //Intialization of Data Types
    int i;
    
    //Intial value assignment
    i = 1;

    //Label
    printf("While loop result: ");

    //while Loop for creation of factorials less than equal or equal to 128 
    while (i <= 128) {

        //Output of values
        printf("%d ", i);
        i *= 2;
    }

    //separation of while and for loop outputs
    printf("\nFor loop result:   ");

    //for Loop for creation of factorials less than equal or equal to 128 
    for (i = 1; i<= 128; i*=2){
        printf("%d ", i);
    }
    
    //stops the program for closing immediately
    getch();
    return 0;
}