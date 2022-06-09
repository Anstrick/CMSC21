#include <stdio.h>
#include <conio.h>

//inlude library that contains pow() function
#include<math.h>

int main(void)
{
    //Intialization of Data Types
    int n, np;

    //OUTPUT
    //for loop to print n and n values
    for (n=0; n<=10; n+=1) {

        //calculates for 2 to the power of n
        np = pow(2, n);
        printf("%d %d \n", n, np);
    }

    //stops the program for closing immediately
    getch();
    return 0;
}