#include <stdio.h>
#include <conio.h>
int main()
{
    //Initialization
    int num, tennum, onenum;

    //assignment of value for num
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    //assignment of values for tennum (tensdigit), and onenum (ones digit)
    tennum = num/10;
    onenum = num%10;

    //input validation if num is indeed a two digit number
    if (num<10 || num>99)
        printf("Input is invalid");

    //OUTPUT
    else{
        printf("Number entered in words: ");

        //Outputs for 10 and numbers with unique spellings
        if (num==10)
            printf("ten");
        else if (num==11)
            printf("eleven");
        else if (num==12)
            printf("twelve");
        else if (num==13)
            printf("thirteen");
        else if (num==15)
            printf("fifteen");

        //Outputs for numbers with generic spellings but have "teen" in their name
        else if (tennum==1 && tennum < 2){
            if (onenum==4)
                printf("four");
            else if (onenum==6)
                printf("six");
            else if (onenum==7)
                printf("seven");
            else if (onenum==8)
                printf("eight");
            else if (onenum==9)
                printf("nine");

            printf("teen");
        }

        //Outputs for tens digit of numbers with generic spellings
        else {
            if (tennum == 2)
                printf("twenty ");
            else if (tennum == 3)
                printf("thirty ");
            else if (tennum == 4)
                printf("forty ");
            else if (tennum == 5)
                printf("fifty ");
            else if (tennum == 6)
                printf("sixty ");
            else if (tennum == 7)
                printf("seventy ");
            else if (tennum == 8)
                printf("eighty ");
            else if (tennum == 9)
                printf("ninety ");


            //Outputs for ones digit of numbers with generic spellings
            if (onenum == 1)
                printf("one");
            else if (onenum == 2)
                printf("two");
            else if (onenum == 3)
                printf("three");
            else if (onenum == 4)
                printf("four");
            else if (onenum == 5)
                printf("five");
            else if (onenum == 6)
                printf("six");
            else if (onenum == 7)
                printf("seven");
            else if (onenum == 8)
                printf("eight");
            else if (onenum == 9)
                printf("nine");
            }
        }
            
    //stops the program for closing immediately
    getch();
    
    return 0;
}