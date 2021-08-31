#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * DectoNBase(int n, int num);
char array[100];
int main(){
 int i=0;
 char *arr;
 arr=DectoNBase(21,5678);
 if(arr!=NULL){
 	printf("TRUE");
 }
 strrev(arr);
 for(i=0;arr[i]!='\0';i++){
 	
 	//printf("%d",arr[i]);
 	if(arr[i]>=10){
 		printf("%c",64+(arr[i]-9));
 		
	 }
	 else{
	 	printf("%d",arr[i]);
	 }
 	
 	
 }
 
	
	
}

char * DectoNBase(int n, int num){
	int count=0;
	char rem;
	while(num!=0){
		rem=num%n;
		printf("%d\n",rem);
		array[count++]=rem;
		num=num/n;	
	}
	array[count]='\0';
	return array;
}

