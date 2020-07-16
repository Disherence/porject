#include<stdio.h>
#include<string.h>
#define PRAISE "you are extrardinary begin"

int main(void)
{
    char name[40];
    printf("your name:");
    scanf("%s", name);
    printf("hello %s.%s", name, PRAISE);

    return 0;
}