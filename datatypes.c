#include <stdio.h>

int main()
{
    char *p;
    short int x=9;
    p=(char *)&x;
    if(*p==9)printf("1");
    else
    printf("2");
}

