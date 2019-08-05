#include <stdio.h>
void main()
{
    //YTD as Year to day, MTD as month to day, rd_in_week as remain days in week, count as counter of leap year , CaY as calculated year, CaM as calculated month, CaD as calculated day.

    int BY , BM , BD , CY , CM , CD , CaY , CaM , CaD ,YTD , MTD , Days , year , Weeks , rd_in_week, count=0;

    printf("Enter Current Year: \n");
    scanf("%d",&CY);

    printf("Enter Current Month: \n");
    scanf("%d",&CM);

    printf("Enter Current Date: \n");
    scanf("%d",&CD);

     printf("Enter Your Birth Year: \n");
    scanf("%d",&BY);

    printf("Enter Your Birth Month: \n");
     scanf("%d",&BM);

    printf("Enter Your Birth Date: \n");
    scanf("%d",&BD);

if(BM == 2 || CM == 2)
{
    if(((BY % 4 == 0) && (BY % 100 != 0)) || (BY % 400 == 0))
{
    if(BM==2 && BD > 29)
    printf("Input Error!");
}
else if(!(((BY % 4 == 0) && (BY % 100 != 0)) || (BY % 400 == 0)))
{
    if(BM==2 && BD > 28)
    printf("Input Error!");
}
if(((CY % 4 == 0) && (CY % 100 != 0)) || (CY % 400 == 0))
{
    if(CM==2 && CD > 29)
    printf("Input Error!");
}
else if(!(((CY % 4 == 0) && (CY % 100 != 0)) || (CY % 400 == 0)))
{
    if(CM==2 && CD > 28)
    printf("Input Error!");
}

}

else if((BM==4) || (BM==6) || (BM==9) || (BM==11) || (CM==4) || (CM==6) || (CM==9) || (CM==11))
{
    if(BD>30 || CD > 30)
    {
        printf("Input Error!");
    }
}
else
{

if((CY < BY) || (CM<1 || CM>12) || (CD<1 || CD>31) || (CM==2 && CD > 29) ||  (CY<1900 || CY>2070) || (BM<1 || BM>12) || (BD<1 || BD>31) || (BM==2 && BD > 29) || (BY<1900 || BY>2070))
    {
        printf("Input Error!");
    }

else
{
    if(CY==BY)
        {
            if(BM>CM)
            {
                printf("Input Error!");
            }
            if(BM == CM)
            {
                if(BD>CD)
                    printf("Input Error!");
            }
        }

    else
    {

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
            CaM = CM - BM;
        }

            CaY = CY - BY;


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
    if((((BY % 4 == 0) && (BY % 100 != 0)) || (BY % 400 == 0)))
    {
        if(BM>=2)
            count-=1;
    }
    if((((CY % 4 == 0) && (CY % 100 != 0)) || (CY % 400 == 0)))
    {
        if(CM<=2)
            count-=1;
    }



    YTD = CaY * 365;
    Days = YTD+MTD+CaD+count;
    Weeks = Days/7;
    rd_in_week = Days%7;

    printf("\nYup!! we got your age\n\nYou are %d years %d months %d days old.\n\n",CaY,CaM,CaD);
    printf("Your age in Days is %d days\n\n",Days);
    printf("Your age in Weeks is %d weeks and %d days \n\n",Weeks,rd_in_week);

}
}
}
}
