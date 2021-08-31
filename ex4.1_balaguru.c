#include<stdio.h>
#include<stdlib.h>
int return_right_most_digit(float );
int main(){
	float f;
	printf("enter a floating point number:");
	scanf("%f",&f);
	//int z=f;
	printf("%d",return_right_most_digit(f));
	
}

int return_right_most_digit(float f){
	int ans=(int)f%10;
	return ans;
	
}

