#include<stdio.h>
void main()
{
int n1=6,n2=3, m1=7,m2,m3,r1=4,r2,r3,r4,r5=6;
for(m2=0;m2<=9;m2++)
{
for(m3=0;m3<=9;m3++)
{
for(r2=0;r2<=9;r2++)
{
for(r3=0;r3<=9;r3++)
{
for(r4=0;r4<=9;r4++)
{
if((((m1*100+m2*10+m3*1)*n2*1)+((m1*100+m2*10+m3*1)*n1*10))==(r1*10000+r2*1000+r3*100+r4*10+r5*1))
{
printf("Value of m2 : %d\n",m2);
printf("Value of m3 : %d\n",m3);
printf("Value of r2 : %d\n",r2);
printf("Value of r3 : %d\n",r3);
printf("Value of r4 : %d\n",r4);
printf("\n\n");
}
}
}
}
}
}
}
