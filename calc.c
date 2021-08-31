#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[]) {
  /* code */
  int i,j,k=1;

//printf("*********calculator***********" );
for(i=0;i<6;i++)
  {
    for(j=0;j<6;j++)
      {
        if(i==j ||j<=i)
          {printf("%d",k);
          k++;
          }
          else{
            printf(" ");
          }
          //k++;
          //i++;
      }
      printf("\n");
  }


  return 0;
}
