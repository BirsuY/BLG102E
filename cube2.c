//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>

double cube_volume(double side_length);

int main(){
    printf("The volume of the cube whose side length is %d is %.2f\n", 5, cube_volume(5));

    return EXIT_SUCCESS; 
}

double cube_volume(double side_length)
{
    if(side_length >= 0){
        return (side_length * side_length * side_length); 
	}
}
