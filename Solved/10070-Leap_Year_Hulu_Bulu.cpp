/* Problem Number:- 10070
Problem Name:- Leap year or not leap year*/
/*In this problem, there is no input limit given, so I assumed that there will be very big integers as input.
So I took a string and calculated methodologically if the input is divisable by 4, 100, 400, 15 or 55.
if the given input is a leap year and divisable by 55, then it's a bulukulu festival year. If it's divisable
by 15 then it's a huluculu festivale year. Otherwise it's an ordinary year. Here goes my code:- */

#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
int main()
{
    long int i, r4, r100, r400, r15, r55, l, leap, hulu15, bulu55, p=0;
    char s[1000000];
    while(gets(s))
    {
        if(p!=0) cout<<"\n";
        p++;
        r4=0;
        r100=0;
        r400=0;
        r15=0;
        r55=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            r4=(r4*10+s[i]-48)%4;
            r100=(r100*10+s[i]-48)%100;
            r400=(r400*10+s[i]-48)%400;
            r15=(r15*10+s[i]-48)%15;
            r55=(r55*10+s[i]-48)%55;
        }
        if((r4==0&&r100!=0)||r400==0) leap=1;
        else leap=0;
        if(r15==0) hulu15=1;
        else hulu15=0;
        if(r55==0) bulu55=1;
        else bulu55=0;
        if(leap==1)
        {
            cout<<"This is leap year."<<endl;
            if(hulu15==1) cout<<"This is huluculu festival year."<<endl;
            if(bulu55==1) cout<<"This is bulukulu festival year."<<endl;
        }
        else if(hulu15==1) cout<<"This is huluculu festival year."<<endl;
        else cout<<"This is an ordinary year."<<endl;
    }
}
