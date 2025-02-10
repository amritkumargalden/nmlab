#include<stdio.h>
#include<conio.h>
void main(){
int n,i;
float x[10],y[10],sx=0.0,sy=0.0,sx2=0.0,sxy=0.0,a,b;
clrscr();
printf("enter the no terms:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("a[%d]b[%d]:",i,i);
scanf("%f%f",&x[i],&y[i]);
printf("%f %f",x[i],y[i]);
}
for(i=1;i<=n;i++){
 sx=sx+x[i];
 sy=sy+y[i];
 sxy=sxy+(x[i]*y[i]);
 sx2=sx2+(x[i]*x[i]);
}
printf("%f %f %f %f",sx,sy,sxy,sx2);
a=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
b=((sx2*sy)-(sx*sy))/((n*sx2)-(sx*sx));
printf("the value of a=%f and b=%f",a,b);
getch();
}
