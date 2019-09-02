#include<stdio.h>
main()
{
int n, i, x, a[103];
scanf("%d", &n);
for (i=1; i<=n; i++)
{
scanf("%d", &x);
a[x]=i;
}
for (i=1; i<=n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
