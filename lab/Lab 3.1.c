#include <stdio.h>

int main() {
    float H, W;
    float Area;

    printf("H: ");

    scanf("%f", &H);

    printf("W: ");
 
    scanf("%f", &W);

    Area = (H * W) / 2.0; 

    printf("Area = %.1f\n", Area);

    return 0; 
}