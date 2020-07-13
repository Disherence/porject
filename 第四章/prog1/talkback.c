#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(){
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi,your first name?\n");
    scanf("%s", name);
    printf("weight?\n");
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen("name");
    volume = weight / DENSITY;
    printf("volume is %2.2f \n");
    printf("letters is %d \n", letters);
    printf("have %d byte \n");
    return 0;
}