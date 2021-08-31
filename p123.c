#include<stdlib.h>
#include<stdio.h>
void fun(int * a);
int main(int argc, char const *argv[]) {
  /* code */
int *p=NULL;
fun(*p);
*p=6;
printf("%d\n",*p);
  return 0;
}

void fun(int * a)
{

  a=(int*)(malloc (sizeof(int)));
}
