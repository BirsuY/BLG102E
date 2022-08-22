//birsuyilmaz
#include <stdio.h>

void swap_ascending(int arr[]);

void swap_descending(int arr[]);

int main(){
    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original Array: ");
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if (i < 9){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }

    swap_ascending(arr);
    printf("Sorted Array(Ascending): ");
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if (i < 9){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }

    swap_descending(arr);
    printf("Sorted Array(Descending): ");
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if (i < 9){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }

    return 0;
}

void swap_descending(int arr[])
{
    int temp;
    for(int j = 9; j > 0; j --){
        for(int i = 0; i < j; i++){
            if(arr[i] < arr[i+1]){
                    temp = arr[i]; 
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
        }
    }

}

void swap_ascending(int arr[]){
    int temp;
    for(int j = 9; j > 0; j --){
        for(int i = 0; i < j; i++){
            if(arr[i] > arr[i+1]){
                    temp = arr[i]; 
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
        }
    }
}
