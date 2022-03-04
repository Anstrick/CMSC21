#include <stdio.h>

int main(void)
{
    //Initializes the variables and their types
    int i;
    float x;

    //Sets the values of the variables
    i = 40;
    x = 839.21f;

    /*
    Prints 2 lines of statements matching the 
      variable names with their values but with
      add functionality, where: 
      - the number directly after the % would 
      represent the total number of characters 
      the programmer wants to show
      - the +/- sign would dictate whether empty 
      spaces will be added before the number or
      after
      - if there is .(number) format the number 
      would dictate the minimum number of decimal
      numbers to output
      - for the case of .(number)e it would 
      output the exponential form of a number
      with the number of digits equal to (number)
    */

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}