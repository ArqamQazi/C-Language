#include<stdio.h>
#include<conio.h>
void main(){
int num,sum=0,rem;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
while(num!=0){
rem=num%10;
sum=(sum*10)+rem;
num=num/10;
}
printf("\nReverse of a number is %d",sum);
getch();
}