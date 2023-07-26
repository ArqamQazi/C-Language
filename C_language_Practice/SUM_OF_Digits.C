#include<stdio.h>
#include<conio.h>
void main(){
int num,sum=0;
clrscr();
printf("Enter any number to find sum of its of digits : ");
scanf("%d",&num);
while (num!=0){
sum+=num%10;
num= num/10;
}
printf("Sum of digits = %d",sum);
getch();
}