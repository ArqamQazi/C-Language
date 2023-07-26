#include<stdio.h>
#include<conio.h>
void main(){
int a[10],i,j,temp;
clrscr();
printf("Enter 10 numbers : ");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(j=0;j<10;j++){
for(i=0;i<10;i++){
if(a[i+1]<a[i]){
temp=a[i+1];
a[i+1]=a[i];
a[i]=temp;
}
}
}
printf("\nArray in ascending order : ");
for(i=0;i<10;i++){
printf("%d\n",a[i]);
}
getch();
}





