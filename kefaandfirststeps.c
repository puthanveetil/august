#include<stdio.h>
int main()
{
int n,m=1,c=1,i,a[100000],k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]<=a[i+1]&&i<n-1)
c++;
else
{
if(m<c)m=c;
c=1;
}
}
printf("%d",m);
}
