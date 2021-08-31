#include<stdio.h>
#include<stdlib.h>

int main(){
	int n ,m;
	printf("enter n and m\n");
	scanf("%d %d",&n,&m);
	printf("%d",diff_of_sum(n,m));
	
}

int diff_of_sum(int n,int m){
	int i;
	int divide_by_n=0,not_divide_by_n=0;
	for ( i=1;i<=m;i++){
		
		if (i%n==0){
			divide_by_n+=i;
		}
		else{
			not_divide_by_n+=i;
		}
	}
	
	return (not_divide_by_n-divide_by_n);
		
}
