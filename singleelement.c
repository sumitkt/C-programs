#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[7]={3,8,3,2,2,1,1};
	int i,res=0;
	for(i=0;i<7;i++){
		res=res^array[i];
		printf("%d\n",res);
	}
	printf("%d\n",res);
	
	}
