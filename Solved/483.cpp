#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i, l, j, k;
    while(gets(s))
    {
        l=strlen(s);
        k=-1;
        for(i=0;i<l;i++)
            if(s[i]==' ')
            {
                for(j=i-1;j>k;j--)
                    printf("%c",s[j]);
                printf(" ");
                k=i;
            }
        for(i=l-1;i>k;i--)
            printf("%c",s[i]);
        printf("\n");
    }
}
