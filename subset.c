#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{

  char s[]="abcab";
  int i=0,j=0,k=0;
  for(i=0;i<strlen(s);i++)
  {
    for(j=0;j<strlen(s);j++)
      {

        //printf("%-12.*s\n",k,s);
        //printf("%*.*s\n",j+1,s);
        for(k=i;k<=j;k++)
        { printf("%c",s[k]);
        }
        printf("\n");
      }
  }
  return 0;
}
