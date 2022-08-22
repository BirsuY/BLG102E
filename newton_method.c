//birsuyilmaz
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPSILON 0.0001

int main(){
    double num1, num2, num3;
    double y1, y2, x1, x2, m;
    double x = 1;

    scanf("%lf %lf %lf", &num1, &num2, &num3);
    while (fabs(num1*x*x + num2*x + num3) > EPSILON){
        x1 = x - EPSILON;
        x2 = x + EPSILON;
        y1 = num1*x1*x1 + num2*x1 + num3;
        y2 = num1*x2*x2 + num2*x2 + num3;

        m = (y2-y1)/ (2 * EPSILON);

        if(!m) m+=EPSILON;

        x = (-y2/m) + x2; //neden -y2 ?
    }

    printf("Root: %.2f\n", x);



    return 0;
}
