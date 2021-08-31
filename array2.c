#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	
	char a[]="acbacxabcdabxabcdacbacdabcy";
	char b[]="acbacdabcy";
	int i=0,j=0,flag1=0;
	
	for(i=0;a[i]!='\0';i++){
		
		if(a[i]!=b[j]){
			flag1=1;
			continue;
			
		}
		else{
			int flag=0,flag1=0,k;
			k=i;
			while((b[++j]!='\0')&&(a[++k]!='\0')){
				if(a[k]==b[j]){
					flag=1;
					continue;
				}
				else{
				j=0;
				i=k-1;
				flag=0;
				break;
				
				}
			}
			if(flag==1){
				printf("String matched at index %d",i);
				break;
			}}}
			
	if(flag1==1){
		printf("String didnot matched");
	}
	
}
