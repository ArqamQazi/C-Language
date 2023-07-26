#include<stdio.h>
#include<conio.h>
void main(){
int element[10],i,j,temp;
clrscr();
printf("\nEnter 10 integer number");
for(i=0;i<10;i++){
scanf("%d",&element);
}
for(i=0;i<10;i++){
for (j=i+1;j<10;j++){
if(element[i]>element[j]){
temp=element[i];
element[i]=element[j];
element[j]=temp;
}
}
}
printf("Element are now in ascending order:");
for(i=0;i<10;i++){
printf("%d\n",element[i]);
}
getch();
}
