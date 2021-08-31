#include<stdio.h>
#include<stdlib.h>
void return_most_digit(float,int* );
int count_no_of_digits(int num);
int main(){
	float f;
	
	printf("enter a floating point number:");
	scanf("%f",&f);
	
	int count=count_no_of_digits((int)f);
	int  array[count];
	//int z=f;
	return_most_digit(f,array);
	//printf("%d",);
	int i;
	for(i=0;i<count;i++){
		printf("%d",array[i]);
	}
}

void return_most_digit(float f,int * a){
	//int ,count;
	int ans=(int)f;
	int i=0;
	
	while(ans!=0){
		a[i++]=ans%10;
		ans=ans/10;	
	}
}
int count_no_of_digits(int num){
	
	int count=0;
	while(num !=0){
		count++;
		num=num/10;
		
	}
	return count;
}
