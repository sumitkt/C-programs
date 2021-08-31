#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int l,int m);
void BubbleSort(int *a,int size);
int main(){
	
	int array[]={1,8,0,2,3,5,6},i;
	
	BubbleSort(array,7);
	for(i=0;i<7;i++){
		printf("%d",array[i]);
	}
	
}

void BubbleSort(int *a,int size){
	
	int i, j,swapped;
	for(i=0;i<size-1;i++){
		swapped=0;
		for(j=0;j<size-i-1;j++){
			
			if(a[j]>a[j+1]){
				swap(a,j,j+1);
				swapped=1;
			}
			
			
			
		}
		
		if(swapped==0){
			break;
		}	
		
	
	}
	
	
	
}
void swap(int *a,int l,int m){
	int temp;
	temp=a[l];
	a[l]=a[m];
	a[m]=temp;
		
}
