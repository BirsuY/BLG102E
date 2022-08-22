//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TOLERANCE 1e-4

double square_root(double n);
void print_sqrt(double n);

int main(){
    printf("Square root of %d is: %.2f\n", 5, square_root(5));
    printf("Square root of %d is: %.2f\n", 7, square_root(7));
    print_sqrt(5);
    print_sqrt(7);

    return EXIT_SUCCESS;
}

double square_root(double n){
    const double initial_guess = 1.0;
    double guess = 0.0;
    guess = initial_guess;
    while(fabs(guess * guess - n) / n > TOLERANCE){
        guess = (guess + (n/guess)) / 2.0;
    }
    // printf("Square root of %.2f is: %.2f\n", n, guess); you should not mix input/output operation to calculation
    return guess;
}

void print_sqrt(double n){
    printf("Square root %.2f is: %.2f\n", n, square_root(n));
}
