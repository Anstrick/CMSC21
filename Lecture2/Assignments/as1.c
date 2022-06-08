#include <stdio.h>
#include <conio.h>
int main()
{
    //Initialization
    int n, rn = 0;

    //Input
    printf("Please enter a 2-digit number: ");
    scanf("%d", &n);

    //Loop that reverses the number n
    while(n != 0)
    {   
        /*increases the value of rn by 10 
        and adds the numbers digit of n*/
        rn = (rn * 10) + (n % 10);

        //removes the number digit of n
        n /= 10;
    }

    //Output
    printf("Reverse: %d", rn);

    //stops the program for closing immediately
    getch();
    
    return 0;
}