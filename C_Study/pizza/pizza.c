#include<stdio.h>
#define PI 3.14159
int main(void)
{
    float area, circum, radius;
    printf("radius:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("C: %1.2f, A:%1.2f", circum, area);

    return 0;
}