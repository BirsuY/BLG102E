//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>

int read_value_between(int low, int high){
    int value;
    do{
        printf("Enter a value betweeen %d-%d: ", low, high);
        scanf("%d", &value);
    }while(value < low || value > high);
    return value;
}

int main(){
    int hours;
    int minutes;
    int months;
    hours= read_value_between(0,23);
    minutes= read_value_between(0,59);
    months = read_value_between(1,12);
    printf("Month: %d, Hours: %d, Minutes: %d\n",months, hours, minutes);

    return EXIT_SUCCESS;
}
