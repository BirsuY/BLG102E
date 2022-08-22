//birsuyilmaz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//rand() does not give unpredictable randoms, and doesn't follow random distribution
int main(){
    int num = 0;
    srand(time(NULL)); //the seed will be determined by the current time, so will be different if you don't call in the same second
	for(int i = 0; i <=10; i++){
        //srand(time(NULL)); do not set the seed everytime because you will get the same number as a sequence
        num = rand();
        printf("%lf ", (double) num / RAND_MAX); //normalizing it to create a sequence between 0-1
    }
    printf("\n");
    printf("%d\n", RAND_MAX); //maximum random number
	return 0;
}
