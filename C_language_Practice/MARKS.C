#include<stdio.h>
#include<conio.h>
void main(){
float marks[4];
float total=0.0,perc=0.0;
int i;
clrscr();
for(i=1;i<=4;i++){
printf("\nEnter marks of subject %d: ",i);
scanf("%f",&marks[i]);
}
for(i=1;i<=4;i++){
total=total+marks[i];
}
printf("\nTotal = %f",total);
perc=total/4;
printf("\nPercentage = %f%",perc);
getch();
}