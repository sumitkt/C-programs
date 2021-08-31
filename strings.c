#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

/* point1 */
//int main(){
//	
//	int x=7;
//	//free(x);
//	printf("\"hekko everyone\"");
//	
//}


/* point 2 */
//int main(){
//	char s1[4]="abc";
//	char s2[4];
//	s2=s1; // we cannot do this because ...LHS is array name i.e it itself is a dddress which cannot be changed.
//	printf("%s",s1);

/* POINT 3 */
//int main(){
//	
//	char c;
//	scanf("%c",&c);
//	if ((c>='A'&& c<='Z')|| (c>='a' && c<='z')){
//		printf("IT iS A ALPHABET");
//		
//	}
//	else if(c>='0' && c<='9'){
//		printf("IT is a digit");
//	}
//	
//	return 0;
//}




//
//int main(){
//	char name[5];
//	printf("enter the string\n");
//	scanf("%[^\n]s",name); //here we dont use ampersand because  array name is itself a address.
//	printf("%s",name); // note here that scanf pehla whitespace character dekh ke hi uske baad ka character store nhi karega. ENTER key is also onr of whitespace
// 
// //Note here : [^\n] by using this we can read every character except newline.
// 
// // note here that scanf can sometimes  read character from stdin more than the size specified ...this is actually a undefined reference,
// // we should try to avoid it with width specifier
//}
	

//int main(){
//	
//	char  a1[20]="sumit kumar Thakur";
//	char b1[20];
//	int count=-1;
//	//int i=0;
//	while(b1[count]=a1[++count])
//	//count++;
//	//b1[count+1]='\0';
//	printf("%s\n",b1);
//	
//	
//}

//int main(){
//	
//	char array[6];
//	char ch;
//	int c=0;
//	do{
//		//if(ch=='\n')
//		//flush(stdin);
//		ch=getchar();
//		array[c]=ch;
//		c++;
//	}while(ch !='\n');
//	c=c-1;
//	array[c]='\0';
//	printf("%s",array);	
//}

//int main(){
//	char *s='1998';
//	printf("%d",atoi(s));
//}

/* 2D character array */
//int main(){
////When scanf is called, it skips over all leading white space (spaces, tabs, and newlines).
//// Try recompiling and running scanfdemo. Each time it prompts for a number, try entering a bunch of newlines, spaces, and tabs before typing the number. The extra white space will have no effect. 	
//	char names[5][20];
//	int i;
//	for (i=0;i<5;i++){
//		scanf("%[^\n]s",names[i]);
////		if(getchar()=='\n')
////		printf("ERROR");
////		if(i==1){
////			break;
////		}
//		while(getchar()!='\n');  // it is not advisable to use fflush so i am while looping to eatup all neline in buffer
//		//fflush(stdin);
//		printf("hello\n");
//	}
//	//printf("%c",names[1][0]);
//
//	for (i=0;i<5;i++){
//		printf("%s\n",names[i]);
//	}	
//	printf("\n");
//	// bubble sort algorithm to sort names
//	int j;
//	for(i=0;i<5;i++){
//		
//		for(j=0;j<5-i-1;j++){
//			
//			if (strcmp(names[j],names[j+1])>0){
//				
//				swap(&names[j],&names[j+1]);
//			}
//			else{
//				continue;
//			}
//			
//		}
//		
//	}
//	for (i=0;i<5;i++){
//		printf("%s\n",names[i]);
//	}
//}
//void swap(char * s1,char * s2){
//	
//	char  t1[20];
//	strcpy(t1,s1);
//	strcpy(s1,s2);
//	strcpy(s2,t1);
//	
//	
//	return;
//}

/* string constant one method */
//int main(){
//	
//	char * s=(char *)malloc(sizeof(char)*6);
//	scanf("%s",s);
//	//getchar();
//	printf("%c",*s);
//	free(s);
//	
//}

/* string constant another method */

int main(){
	char *s;
	scanf("%as",&s);
	printf("%s",s);
	free(s);
	
}





	
	


