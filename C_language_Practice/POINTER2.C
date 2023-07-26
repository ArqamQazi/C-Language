#include<stdio.h>
#include<conio.h>
void main(){
char str[10], *ptr;
int l=0;
clrscr();
	printf("Enter string: ");
	scanf("%s", str);
	ptr=str;
	while(*ptr!='\0'){
	l=l+1;
	ptr=ptr+1;
	}
	while(l>0){
	ptr=ptr-1;
	printf("%c",*ptr);
	l=l-1;
	}
	getch();
	}