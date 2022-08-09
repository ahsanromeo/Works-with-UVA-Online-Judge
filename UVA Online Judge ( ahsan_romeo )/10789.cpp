#include <stdio.h>
#include <string.h>
int isp(int n);
int main()
{
    int t, i, l, f, tc=1;
    char s[2010], alph[62];
    for(i=0;i<10;i++)
        alph[i]=i+48;
    for(i=10;i<36;i++)
        alph[i]=i+55;
    for(i=36;i<62;i++)
        alph[i]=i+61;
    int aln[62];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(s);
        f=0;
        for(i=0;i<62;i++)
            aln[i]=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]==48)
                aln[0]++;
            else if(s[i]==49)
                aln[1]++;
            else if(s[i]==50)
                aln[2]++;
            else if(s[i]==51)
                aln[3]++;
            else if(s[i]==52)
                aln[4]++;
            else if(s[i]==53)
                aln[5]++;
            else if(s[i]==54)
                aln[6]++;
            else if(s[i]==55)
                aln[7]++;
            else if(s[i]==56)
                aln[8]++;
            else if(s[i]==57)
                aln[9]++;
            else if(s[i]==65)
                aln[10]++;
            else if(s[i]==66)
                aln[11]++;
            else if(s[i]==67)
                aln[12]++;
            else if(s[i]==68)
                aln[13]++;
            else if(s[i]==69)
                aln[14]++;
            else if(s[i]==70)
                aln[15]++;
            else if(s[i]==71)
                aln[16]++;
            else if(s[i]==72)
                aln[17]++;
            else if(s[i]==73)
                aln[18]++;
            else if(s[i]==74)
                aln[19]++;
            else if(s[i]==75)
                aln[20]++;
            else if(s[i]==76)
                aln[21]++;
            else if(s[i]==77)
                aln[22]++;
            else if(s[i]==78)
                aln[23]++;
            else if(s[i]==79)
                aln[24]++;
            else if(s[i]==80)
                aln[25]++;
            else if(s[i]==81)
                aln[26]++;
            else if(s[i]==82)
                aln[27]++;
            else if(s[i]==83)
                aln[28]++;
            else if(s[i]==84)
                aln[29]++;
            else if(s[i]==85)
                aln[30]++;
            else if(s[i]==86)
                aln[31]++;
            else if(s[i]==87)
                aln[32]++;
            else if(s[i]==88)
                aln[33]++;
            else if(s[i]==89)
                aln[34]++;
            else if(s[i]==90)
                aln[35]++;
            else if(s[i]==97)
                aln[36]++;
            else if(s[i]==98)
                aln[37]++;
            else if(s[i]==99)
                aln[38]++;
            else if(s[i]==100)
                aln[39]++;
            else if(s[i]==101)
                aln[40]++;
            else if(s[i]==102)
                aln[41]++;
            else if(s[i]==103)
                aln[42]++;
            else if(s[i]==104)
                aln[43]++;
            else if(s[i]==105)
                aln[44]++;
            else if(s[i]==106)
                aln[45]++;
            else if(s[i]==107)
                aln[46]++;
            else if(s[i]==108)
                aln[47]++;
            else if(s[i]==109)
                aln[48]++;
            else if(s[i]==110)
                aln[49]++;
            else if(s[i]==111)
                aln[50]++;
            else if(s[i]==112)
                aln[51]++;
            else if(s[i]==113)
                aln[52]++;
            else if(s[i]==114)
                aln[53]++;
            else if(s[i]==115)
                aln[54]++;
            else if(s[i]==116)
                aln[55]++;
            else if(s[i]==117)
                aln[56]++;
            else if(s[i]==118)
                aln[57]++;
            else if(s[i]==119)
                aln[58]++;
            else if(s[i]==120)
                aln[59]++;
            else if(s[i]==121)
                aln[60]++;
            else if(s[i]==122)
                aln[61]++;
        }
        printf("Case %d: ", tc++);
        for(i=0;i<62;i++)
        {
            if(isp(aln[i])==1)
            {
                printf("%c", alph[i]);
                f=1;
            }
        }
        if(f==0)
            printf("empty");
        printf("\n");
    }
}
int isp(int n)
{
    if(n==1||n==0)
        return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
