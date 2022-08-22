//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
double cube_volume(double side_length);
int main(){
    double side_length1, side_length2;
    double volume1, volume2;
    printf("Please enter the side length of the first cube: ");
    scanf("%lf", &side_length1);
    volume1 = cube_volume(side_length1); //side-length1 is an actual parameter
    printf("The volume of the cube whose side length is %.2f is %.2f\n", side_length1, volume1);
    printf("Please enter the side length of the second cube: ");
    scanf("%lf", &side_length2);
    volume2 = cube_volume(side_length2);
    printf("The volume of the cube whose side length is %.2f is %.2f\n", side_length2, volume2);

    return EXIT_SUCCESS;
}


double cube_volume(double side_length)
{
    double volume = side_length * side_length * side_length;
    return volume;
} 
