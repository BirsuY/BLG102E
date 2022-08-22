//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_digit(int digit){
    switch(digit){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
    }
    printf("mumble");
}

void print_teen(int number){
    printf("mumbleteen");
    switch(number){
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
    }
}

void print_tens(int number){
    printf("mumblety");    
    switch(number){
        case 2:
            printf("two");
            break;
    }
}
void print_num(int number){
    //printf("mumble\n");
    int remaining = number;
    if(remaining >= 100){
        print_digit(remaining / 100);
        printf("hundred");
        remaining= remaining %100;
    }
    if (remaining >= 20){
        print_tens(remaining);
        remaining %= 10;
    }
    else if(remaining >= 10){
        print_teen(remaining);
        remaining = 0;
    }
    if (remaining > 0){
        print_digit(remaining);
    }

    printf("\n");
}

int main(){
    int num;
    printf("Enter an amount less than 1K: ");
    scanf("%d", &num);
    print_num(num);

    return EXIT_SUCCESS;
}
