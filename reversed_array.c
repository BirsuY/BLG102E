//birsuyilmaz
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE 10
void swap(int *array, int first, int second);
void random_fill_array(int * arr);
int main(){
    int my_array[ARRAY_SIZE];
    srand(time(NULL));
    random_fill_array(my_array);

    printf("ORIGINAL ARRAY: ");
    for(int i = 0; i < ARRAY_SIZE; printf("%-5d", my_array[i++]));
    printf("\n");
    for(int j = 0; j < (ARRAY_SIZE/2); j++){
        swap(my_array, j, ARRAY_SIZE-(1+j));
    }
    printf("REVERSE ARRAY: ");
    for(int k = 0; k < ARRAY_SIZE; printf("%-5d", my_array[k++]));
    printf("\n");

    return EXIT_SUCCESS;
}
//!!!
void swap(int *array, int first, int second){
    int temp ;
    temp= array[first];
    array[first] = array[second];
    array[second] = temp;
}

void random_fill_array(int * arr){
    for(int i= 0; i < ARRAY_SIZE ; i++){
        arr[i] = rand() % ARRAY_SIZE ;
    }
}
