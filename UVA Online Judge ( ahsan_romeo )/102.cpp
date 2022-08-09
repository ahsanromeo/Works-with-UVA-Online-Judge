#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    long long b1, g1, c1, b2, g2, c2, b3, g3, c3;
    string s="BCG";
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {

        long long mn=2147483647, mov;
        int i=1;
        string bin;
        do
        {
            if(i==1)
                mov=b2+b3+c1+c3+g1+g2;
            else if(i==2)
                mov=b2+b3+g1+g3+c1+c2;
            else if(i==3)
                mov=c2+c3+b1+b3+g1+g2;
            else if(i==4)
                mov=c2+c3+g1+g3+b1+b2;
            else if(i==5)
                mov=g2+g3+b1+b3+c1+c2;
            else
                mov=g2+g3+c1+c3+b1+b2;
            if(mov<mn)
            {
                mn=mov;
                bin=s;
            }
            i++;
        }while(next_permutation(s.begin(),s.end()));
        cout<<bin<<" "<<mn<<endl;
    }
}
