
/*
Zetech C snack bar
created by DIT-01-0063/2022
C89 compliler
MIT license
*/




#include <stdio.h>
#include <stdlib.h>

int menu(){
    int item;
    printf("\tToday's Menu\n");
    printf("1. smokie - ksh 40\n");
    printf("2. milkshake - ksh 150\n");
    printf("3. Hamburger -ksh 300\n");
    printf("4. samosa -ksh 50\n");
    printf("5. African tea- ksh 60\n");
    printf("Enter Item no: ");
    scanf("%d",&item);
    if(item > 0 && item<= 3){
        printf("item added to cart\n");
    }
     else{
        printf("Invalid item\n");
        menu();

{

    return item;
    }



