
#include<stdio.h>
int main()
{
int a,n,i,p,d=1000,j;
scanf("%d%d",&a,&n);
int c[n];
for(i=0;i<n;i++)
scanf("%d",&c[i]);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(c[i]>c[j])
{
p=c[i];
c[i]=c[j];
c[j]=p;
}
}
}
for(i=0;i<=n-a;i++)
{
p=c[i+a-1]-c[i];
if(p<d)
d=p;
}
printf("%d",d);
return 0;
}