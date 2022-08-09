#include <stdio.h>
#include <string.h>
int main()
{
    int t, tc=1, i, l, k;
    char s[1000];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(s);
        l=strlen(s);
        k=0;
        for(i=0;i<l;i++)
        {
            if(s[i]==' ')
                k+=1;
            else if(s[i]=='a')
                k+=1;
            else if(s[i]=='b')
                k+=2;
            else if(s[i]=='c')
                k+=3;
            else if(s[i]=='d')
                k+=1;
            else if(s[i]=='e')
                k+=2;
            else if(s[i]=='f')
                k+=3;
            else if(s[i]=='g')
                k+=1;
            else if(s[i]=='h')
                k+=2;
            else if(s[i]=='i')
                k+=3;
            else if(s[i]=='j')
                k+=1;
            else if(s[i]=='k')
                k+=2;
            else if(s[i]=='l')
                k+=3;
            else if(s[i]=='m')
                k+=1;
            else if(s[i]=='n')
                k+=2;
            else if(s[i]=='o')
                k+=3;
            else if(s[i]=='p')
                k+=1;
            else if(s[i]=='q')
                k+=2;
            else if(s[i]=='r')
                k+=3;
            else if(s[i]=='s')
                k+=4;
            else if(s[i]=='t')
                k+=1;
            else if(s[i]=='u')
                k+=2;
            else if(s[i]=='v')
                k+=3;
            else if(s[i]=='w')
                k+=1;
            else if(s[i]=='x')
                k+=2;
            else if(s[i]=='y')
                k+=3;
            else if(s[i]=='z')
                k+=4;
        }
        printf("Case #%d: %d\n", tc++, k);
    }
}
