#include <stdio.h>
int main()
{
    int h, m, h1, m1, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d:%d", &h, &m);
        if(m==0)
        {
            h1=12-h;
        }
        else
        {
            h1=11-h;
        }
        if(h1<=0)
        {
            h1=h1+12;
        }
        if(m==0)
        {
            m1=m;
        }
        else
        {
            m1=60-m;
        }
        printf("%02d:%02d\n", h1, m1);
    }

}



/*if(m!=00) m1=60-m;
        else m1=0;
        if(m>=0&&m<5) h1=12;
        else if(m>=5&&m<10) h1=1;
        else if(m>=10&&m<15) h1=2;
        else if(m>=15&&m<20) h1=3;
        else if(m>=20&&m<25) h1=4;
        else if(m>=25&&m<30) h1=5;
        else if(m>=30&&m<35) h1=6;
        else if(m>=35&&m<40) h1=7;
        else if(m>=40&&m<45) h1=8;
        else if(m>=45&&m<50) h1=9;
        else if(m>=50&&m<55) h1=10;
        else if(m>=55&&m<60) h1=11;
        printf("%02d:%02d\n", h1, m1);*/
