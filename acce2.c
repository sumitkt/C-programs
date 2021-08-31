#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int array[7]={3 ,2 ,1 ,7 ,5 ,4};
	odd_even(array,7);
	
}

int odd_even(int * a,int length){
	
	int i=0;
	int largest_even=-9999;
	int largest_odd=-9999;
	int second_largest_even=-9999;
	int second_largest_odd=-9999;
	for(i=0;i<length;i++){
		
		if(i%2==0){
			if(a[i]>=largest_even)
			largest_even=a[i];
		}
		else{
			if(a[i]>=largest_odd)
			largest_odd=a[i];
		}
		
	}
	for(i=0;i<length;i++){
		
		if(i%2==0){
			if(a[i]>=second_largest_even && a[i]<largest_even){
				second_largest_even=a[i];
			}
			
		}
		else {
			if(a[i]>=second_largest_odd && a[i]<largest_odd){
				second_largest_odd=a[i];
			}
			
		}
			
	}
	printf("%d %d",second_largest_even,second_largest_odd);
}
