#include<stdio.h>
#include<string.h>
#define PRAISE "you are extrardinary begin"

int main(void)
{
    char name[40];
    printf("your name:");
    scanf("%s\n", name);
    printf("hello %s.%s\n", name, PRAISE);
    printf("%zd, %zd\n", strlen(name), sizeof(name));
    printf("%zd, %zd\n", strlen(PRAISE), sizeof(PRAISE));
    return 0;
}