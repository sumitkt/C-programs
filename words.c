#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char const *argv[]) {
char c;
  FILE *fp;
  fp=fopen("words.txt","r+");
  if(fp==NULL)
    printf("Error while opening");
int count=0;
  while((c=getc(fp))!=EOF)
    {
      if(c==' '||(c=='.'&&(c=getc(fp))!='\n'))
        {
          count++;
        }
        else
        continue;


      }

      printf("%d\n",count+1);
      fclose(fp);

  return 0;
}
