#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// algorithm for prime number
int main(){
	
	int array[100];
	int i,j;
	for(i=0;i<100;i++){
		array[i]=i+1;
	}
//	for(i=0;i<100;i++){
//		printf("%d\n",array[i]);
//	}
	//j=3;
	// sieve of eratosthenes
	for (i=1;i<=pow(100,0.5);i++){
		j=i+2;
		if(array[i]!=0){
		
		while(j<100){
			if(array[j]%array[i]==0){
				array[j]=0;
			}
			j=j+2;
		}
	}
		
	}
	
	
	for(i=1;i<100;i++){
		if(array[i]!=0)
		printf("%d\n",array[i]);
	}	
}
