#include <iostream>
#include <cstdio>
using namespace std;
int r, c;
char matrix[24][104];
void zero(int sz, int pos);
void one(int sz, int pos);
void two(int sz, int pos);
void three(int sz, int pos);
void four(int sz, int pos);
void five(int sz, int pos);
void six(int sz, int pos);
void seven(int sz, int pos);
void eight(int sz, int pos);
void nine(int sz, int pos);
int main()
{
    int s;
    string num;
    while(cin>>s>>num)
    {
        if(s==0&&num=="0")
            return 0;
        int l=num.size(), i, j;
        r=2*s+3; c=(l*(s+2))+l-1;
        for(i=0;i<r;++i)
            for(j=0;j<c;++j)
                matrix[i][j]=' ';
        for(i=0;i<l;++i)
        {
            if(num[i]=='0')
                zero(s,1+i);
            else if(num[i]=='1')
                one(s,1+i);
            else if(num[i]=='2')
                two(s,1+i);
            else if(num[i]=='3')
                three(s,1+i);
            else if(num[i]=='4')
                four(s,1+i);
            else if(num[i]=='5')
                five(s,1+i);
            else if(num[i]=='6')
                six(s,1+i);
            else if(num[i]=='7')
                seven(s,1+i);
            else if(num[i]=='8')
                eight(s,1+i);
            else
                nine(s,1+i);
        }
        for(i=0;i<r;++i)
        {
            for(j=0;j<c;++j)
                printf("%c",matrix[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}
void zero(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i][j]='|';
        matrix[i+sz+1][nc1]='|';
        matrix[i+sz+1][j]='|';
    }
}
void one(int sz, int pos)
{
    int np=pos*(sz+2)+(pos-2), c;
    for(c=1;c<=sz;++c)
    {
        matrix[c][np]='|';
    }
    ++c;
    sz=1+2*sz;
    for(;c<=sz;++c)
    {
        matrix[c][np]='|';
    }
}
void two(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][j]='|';
        matrix[i+sz+1][nc1]='|';
    }
}
void three(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][j]='|';
        matrix[i+sz+1][j]='|';
    }
}
void four(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[1+sz][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i][j]='|';
        matrix[i+sz+1][j]='|';
    }
}
void five(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i+sz+1][j]='|';
    }
}
void six(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i+sz+1][nc1]='|';
        matrix[i+sz+1][j]='|';
    }
}
void seven(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][j]='|';
        matrix[i+sz+1][j]='|';
    }
}
void eight(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i][j]='|';
        matrix[i+sz+1][nc1]='|';
        matrix[i+sz+1][j]='|';
    }
}
void nine(int sz, int pos)
{
    int nc1=(pos-1)*(sz+3), i, j;
    for(i=nc1+1,j=1;j<=sz;++j,++i)
    {
        matrix[0][i]='-';
        matrix[1+sz][i]='-';
        matrix[r-1][i]='-';
    }
    j=1+sz+nc1;
    for(i=1;i<=sz;++i)
    {
        matrix[i][nc1]='|';
        matrix[i][j]='|';
        matrix[i+sz+1][j]='|';
    }
}
