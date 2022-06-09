#include <stdio.h>
#include <conio.h>
int main(void)
{
    //Intialization of Data Types
    int i;


    //Label
    printf("While loop result: ");

    i = 1;

    //while Loop 
    while (i <= 10) {
        printf("%d", i);
        i*=2;
    }

    //Label
    printf("\nFor loop result:   ");

    i = 1;

    //for Loop 
    for (; i<10;){
        printf("%d", i);
    }

    //Label
    printf("\nDo while result:   ");

    i = 1;

    //do while loop
    do {
        printf("%d", i);
        i*=2;
    }
    while (i<10);
    
    //stops the program for closing immediately
    getch();
    return 0;
}