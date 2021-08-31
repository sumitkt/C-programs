#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,t=0;
	printf("enter two number");
	scanf("%d %d",&n,&m);
	while(n!=0 && m!=0){
		int  rem1,rem2;
		rem1=n%10;
		rem2=m%10;
		
		if(rem1+rem2>=10){
		t++;
		}
		n=n/10;
		m=m/10;  	
   }
printf("%d",t);
}
