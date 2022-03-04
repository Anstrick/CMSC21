#include <stdio.h> 

int main() 
{ 
    //Initializes the variables and their types
    int num1, denom1, num2, denom2, result_num, result_denom; 

    /*Prints the statement, and asks for user input to set the values
    of num1 and denom1 through the scanf method*/
    printf("Enter first fraction: "); 
    scanf("%d/%d", &num1, &denom1); 

    /*Prints the statement, and asks for user input to set the values
    of num2 and denom2 through the scanf method*/
    printf("Enter second fraction: "); 
    scanf( "%d/ %d" , &num2, &denom2); 

    /*Solves for the resultant numerator and denominator 
    and prints the values*/
    result_num = num1 * denom2 + num2 * denom1; 
    result_denom = denom1 * denom2; 
    printf ( "The sum is %d/%d\n", result_num, result_denom); 
    return 0; 
}