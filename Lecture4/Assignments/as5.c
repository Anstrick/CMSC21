#include <stdio.h>
#include <conio.h>

int main(void)
{
    //Intialization of Data Types
    int days, sday, dtrack, strack, rowtrack;

    strack=1;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &sday);

    //Validation
    if (days<28 || days>31)
        printf("Number of days is invalid!");
    else if (sday<1 || sday>7)
        printf("Starting day is invalid!");

    //Calendar Creation
    else {
        
        for (dtrack=1; dtrack<=days; dtrack+=1){

            rowtrack =  (dtrack+sday-2)%7;
            if (rowtrack==0)
                printf("\n");
            
            for (; strack<=sday; strack+=1){
                if (strack==1)
                    printf("  ");
                else if (strack>1)
                    printf("   ");
            }

            if (dtrack == 1)
                printf("%d", dtrack);
            else if (dtrack < 10)
                printf("  %d", dtrack);
            else if (dtrack >= 10)
                printf(" %d", dtrack);
            

            }
    }


    //stops the program for closing immediately
    getch();
    return 0;
}