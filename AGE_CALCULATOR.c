#include <stdio.h>
void main()
{
    int BY , BM , BD , CY , CM , CD , CaY , CaM , CaD ,YTD , MTD , Days , year , Weeks , count=0;

    printf("Enter Current Date: \n");
    scanf("%d",&CD);

    printf("Enter Current Month: \n");
    scanf("%d",&CM);

    printf("Enter Current Year: \n");
    scanf("%d",&CY);

    printf("Enter Your Birth Date: \n");
    scanf("%d",&BD);

    printf("Enter Your Birth Month: \n");
     scanf("%d",&BM);

    printf("Enter Your Birth Year: \n");
    scanf("%d",&BY);

if(CD < BD)
{
    if((BM==1) || (BM==3) || (BM==5) || (BM==7) || (BM==8) || (BM==10) || (BM==12))
    {
        CD=CD+31;
        CM=CM-1;
        CaD=CD - BD;
    }

    if((BM==4) || (BM==6) || (BM==9) || (BM==11))
    {
        CD=CD+30;
        CM=CM-1;
        CaD=CD - BD;
    }
}
    if(BM==2)
    {
    if(((BY % 4 == 0) && (BY % 100 != 0)) || (BY % 400 == 0))
    {
        CD=CD+29;
        CM=CM-1;
        CaD=CD - BD;
    }

    else
    {
        CD=CD+28;
        CM=CM-1;
        CaD=CD - BD;
    }
    }
    else
    {
        CaD=CD - BD;
    }

    if(CM < BM)
    {
        CM=CM+12;
        CY=CY-1;
        CaM=CM - BM;
    }

    else
    {
    CaM=CM - BM;
    }

    CaY= CY - BY;


    if(CaM == 0)
    {
    MTD = 0;
    }
    if(CaM == 1)
    {
     MTD = 31;
    }
    if(CaM == 2)
    {
        MTD = 31+28;
    }
    if(CaM == 3)
    {
        MTD = 31+28+31;
    }
    if(CaM == 4)
    {
        MTD = 31+28+31+30;
    }
    if(CaM == 5)
    {
        MTD = 31+28+31+30+31;
    }
    if(CaM == 6)
    {
        MTD = 31+28+31+30+31+30;
    }
    if(CaM == 7)
    {
        MTD = 31+28+31+30+31+30+31;
    }
    if(CaM == 8)
    {
        MTD = 31+28+31+30+31+30+31+31;
    }
    if(CaM == 9)
    {
        MTD = 31+28+31+30+31+30+31+31+30;
    }
    if(CaM == 10)
    {
        MTD = 31+28+31+30+31+30+31+31+30+31;
    }

    if(CaM == 11)
    {
        MTD = 31+28+31+30+31+30+31+31+30+31+30;
    }
    if(CaM == 12)
    {
        MTD = 31+28+31+30+31+30+31+31+30+31+30+31;
    }

    for(year=BY;year<=CY;year++)
    {
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
     count+=1;
    }
    }

    YTD = CaY * 365;
    Days = YTD+MTD+CaD+count;
    Weeks = Days/7;

    printf("\nYup!! we got your age\n\nYou are %d years %d months %d days old.\n\n",CaY,CaM,CaD);
    printf("Your age in Days is %d \n\n",Days);
    printf("Your age in Weeks is %d \n\n",Weeks);


}
