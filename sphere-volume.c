/*
a program that calculates the volume of a sphere
*/

#include <stdio.h>
#define UNIT "meter"
#define PI (22.0f / 7.0f)

float float_power(float num, int power);

int main (void) {


    float radius;
    printf("Enter the radius(%s) of the sphere: ", UNIT);
    scanf("%f", &radius);

    float volume = (4.0f / 3.0f) * PI * float_power(radius, 3);

    printf("The volume of a sphere with 10 %s radius is : %0.2f\n", UNIT, volume);

    return 0;
}



float float_power(float num, int power) {
    float result = 1.0f;
    for(int i = 0; i < power; i++) {
        result *= num;
    }
    printf("%d power %0.2f is %0.2f\n", power, num, result);
    return result;
}