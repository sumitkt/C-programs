// remove duplicate elements from sorted array
// this algo takes O(n2) in time as well as O(n) in space.
#include<stdio.h>
#include<stdlib.h>
/*
int main(){
	
	int array[10]={1,2,2,3,3,4,4,4,5,5};
	int new_array[10];
	int i, j, index=0;
	new_array[index++]=array[0];
	
	for(i=1;i<10;i++){
		int flag=0;
		for(j=0;j<10;j++){
			if(new_array[j]==array[i]){
				flag=1;
				break;
			}
			
		}
		if(flag==0){
			new_array[index++]=array[i];
		}
		
	}
	for(i=0;i<index;i++){
		printf("%d\n",new_array[i]);
	}
	
	
}*/

// this algo takes O(n) in time and O(n) in space.
/*
int main(){
	int array[9]={1,2,2,3,3,4,4,4,5};
	int new_array[9];
	int index=0;
	int i=0;
	for(i=0;i<8;i++){
		if (array[i]!=array[i+1]){
			new_array[index++]=array[i];
		}
		else{
			continue;
		}
		
	}
	new_array[index]=array[8];
	
	for(i=0;i<=index;i++){
		printf("%d\n",new_array[i]);
	}
}
*/

// this algo takes O(n) in time and O(1) in space

int main(){
	int array[9]={1,2,2,3,3,4,4,4,5};
	int i,index=0;
	
	for(i=0;i<8;i++){
		if(array[i]!=array[i+1]){
			array[index++]=array[i];
			
		}
		else{
			continue;
		}
		
	}
	array[index]=array[8];
	
	
	for(i=0;i<=index;i++){
		printf("%d\n",array[i]);
	}
		
	
}


















