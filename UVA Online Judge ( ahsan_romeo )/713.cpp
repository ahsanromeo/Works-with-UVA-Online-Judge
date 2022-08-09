#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define mx 210
int main()
{
    char s1[mx], s2[mx], res[1+mx], line[mx];
    int i, j, k, l1, l2, l, a, b, c, t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        for(i=0;i<mx;i++)
        {
            s1[i]='0';
            s2[i]='0';
            res[i]=0;
            line[i]=0;
        }
        res[mx]=0;
        gets(line);
        l=strlen(line);
        for(i=0;line[i]!=' ';i++)
            s1[i]=line[i];
        l1=i;
        for(i=l1+1,j=0;i<l;i++,j++)
            s2[j]=line[i];
        l2=j;
        if(l2>l1)
        {
            swap(s1,s2);
            c=l1;
            l1=l2;
            l2=c;
        }
        for(i=0;i<mx;i++)
        {
            if(s1[i]!=NULL)
                s1[i]-=48;
            if(s2[i]!=NULL)
                s2[i]-=48;
        }
        c=0;
        for(i=0;i<l1;i++)
        {
            a=s1[i];
            b=s2[i];
            res[i]=((a+b+c)%10)+48;
            c=(a+b+c)/10;
        }
        if(c)
            res[l1]=c+48;
        l=strlen(res);
        for(i=0;res[i]=='0';i++);
        l1=i;
        for(i=l-1;res[i]=='0';i--);
        l2=i;
        for(i=l1;i<=l2;i++)
            printf("%c", res[i]);
        printf("\n");
    }
}
