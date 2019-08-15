#include<stdio.h>
int main(void)
{
int b=0,a[100],n,i,j,temp,s=0;
scanf("%d", &n);
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
s+=a[i];}
for(j=0;j<n;j++)
{
for(i=0;i<n-1;i++)
{
if(a[i]<a[i+1])
{	
temp=a[i+1];
a[i+1]=a[i];
a[i]=temp;
}
}
}		 
for(i=0;i<n;i++)
{
b+=a[i];
if(b>s-b)
{
printf("%d", i+1); break;}
}
}