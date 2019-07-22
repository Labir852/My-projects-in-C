#include<stdio.h>
void main()
{
int m1=7,m2,m3=4,n=4,r1=3,r2=0,r3, r4=6,c1,c2,ra,rb,rc,result;

    for(m2=0;m2<10;m2++){
for(r3=0;r3<10;r3++)
{
ra=m3*n;
    c2=ra/10;
    rb=m2*n+c2;
    c1=rb/10;
    rc=m1*n+c1;

   if(rb == m2*n+c2 && r1 == rc/10 && r2 == rc%10 && r4 == ra%10 && r3 == rb%10){

    result=r1*1000+r2*100+r3*10+r4*1;

    printf("\n\nGOT IT!!    The value of m2 = %d\n\n",m2);
    printf("GOT IT!!    The value of r3 = %d\n\n",r3);
    printf("Yup!!   The Final result is %d\n\n",result);
}
}
}

}
