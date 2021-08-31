#include<stdio.h>
char *getstring();
 int main()
 {
   printf("%s\n",getstring() );
   getchar();


 }
char *getstring()
{
char str[]="Will I be printed?";
return str;

}
