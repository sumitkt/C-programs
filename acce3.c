#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[7]={1,8,0,2,3,9,6};
	Product_smallest_pair(array,7);
	
}

int Product_smallest_pair(int * a,int size){
	
	int i=0,j,temp;
	for(i=0;i<size;i++){
		
		for(j=i;j<size-i;j++){
			
			if(a[i]>a[j]){
				
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	
}

