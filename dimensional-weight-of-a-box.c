/*
a program that computes the dimensional weight of a box from inputs provided by the user
*/
#include <stdio.h>

#define INCHES_PER_POUND 166

int main (void) {

    int width, height, length, volume, dimensional_weight;
    printf("Enter the width of the box: ");
    scanf("%d", &width);

    printf("Enter the height of the box: ");
    scanf("%d", &height);

    printf("Enter the length of the box: ");
    scanf("%d", &length);

    volume = width * length * height;
    dimensional_weight = (volume + (INCHES_PER_POUND - 1)) / INCHES_PER_POUND;

    printf("Dimensions : %d x %d x %d.\n", length, width, height);
    printf("Volume(cubic inches): %d.\n", volume);
    printf("Dimension weight(pounds): %d.\n", dimensional_weight);

    return 0;
}