#include<stdio.h>
#include<conio.h>
void main(){
int num;
clrscr();
printf("\nEnter a number : ");
scanf("%d",&num);
if(num%2==0){
printf("Number is Even");
}
else{
printf("Number is odd");
}
getch();
}