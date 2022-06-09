#include<stdio.h>
#include <conio.h>

#define ROW 8
#define COLUMN 8

int main(void){
    //initialize letters (nodes)
    char point[][4] = {"A","B","[C]","[D]","E","F","G","H"};
    //initialize array (matrix)
    int road_networks[ROW][COLUMN] = {{1,1,0,0,0,1,0,0},  
                                     {1,1,1,0,0,0,0,0},
                                     {0,1,1,0,1,1,0,0},
                                     {0,0,0,1,1,0,0,0},
                                     {0,0,0,1,1,0,0,0},
                                     {1,0,1,0,0,1,0,0},
                                     {1,0,0,1,0,0,1,0},
                                     {0,0,0,0,0,1,0,1}};
    //prints top row
    printf("%7c",' ');
    for (int i=0; i<ROW; i++){ 
        printf("%-7s",point[i]); 
    } printf("\n");
    //prints array
    for (int i=0; i<ROW; i++){
        printf("%-7s",point[i]); 
        for (int j=0; j<COLUMN; j++){
            printf("%-7d", road_networks[i][j]);
        } printf("\n");
    } 

    //input 
    int location, check=0;
    while (!check){ //while input for location is not valid
        // could be in one statement but expanded for readability
        printf("\nWhich point are you located?\t0 - A");
        printf("\t1 - B");
        printf("\t2 - C");
        printf("\t3 - D");
        printf("\t4 - E");
        printf("\t5 - F");
        printf("\t6 - G");
        printf("\t7 - H\n");
        printf("Enter your location: ");
        scanf("%d",&location);
        if (location<0 || location>7){ //error for invalid input
            printf("Invalid choice. Enter only numbers 0 to 7.");
        } 
        //breaks loop if valid input
        else if (location>=0 || location<=7)
        { 
            printf("At point: %s\n",point[location]);
            check=1;
        } 
    }
    for (int i=0; i<COLUMN; i++){
        if (road_networks[location][2]==1){ // directly at C
            printf("Now at point: %s\n",point[2]);
            printf("Arrived at nearest charging station at point: %s",point[2]);
            break;
        } 
        else if (road_networks[location][3]==1){ // directly at D
            printf("Now at point: %s\n",point[3]);
            printf("Arrived at nearest charging station at point: %s",point[3]);
            break;
        } 
        else if (road_networks[location][i]==1){
            printf("Now at point: %s\n",point[i]);
            if (point[i]==point[2]){
                printf("Arrived at nearest charging station at point: %s",point[i]);
                break;
            } 
            else if (point[i]==point[3]){
                printf("Arrived at nearest charging station at point: %s",point[i]);
                break;
            } 
            else{
                location=i; //returns if point not found
            }
        }
    }

    getch();

    return 0;
}