#include <stdio.h>
int abs(int x, int y);
int main()
{
    int x1, x2, y1, y2, d1, d2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {
        if(x1==0&&y1==0&&x2==0&&y2==0)
            break;
        if((x1==x2)&&(y1==y2))
        {
            printf("0\n");
            continue;
        }
        if((x1==x2)||(y1==y2))
        {
            printf("1\n");
            continue;
        }
        d1=abs(x1,x2);
        d2=abs(y1,y2);
        if(d1==d2)
        {
            printf("1\n");
        }
        else
            printf("2\n");
    }
    return 0;
}
int abs(int x, int y)
{
    if(x>y)
        return x-y;
    return y-x;
}
