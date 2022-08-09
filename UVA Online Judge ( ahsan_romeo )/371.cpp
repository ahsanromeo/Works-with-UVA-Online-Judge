/*Problem number:- 100
Problem Name:- 3n+1*/

/*In this problem I had to just simulate the stated process and count the cycles and find
out the maximum cycle that I got from the given range. Here goes my code:- */

#include <iostream>
using namespace std;
int main()
{
    int cyc, mx;
    long long int a, b, i, j, n, temp, r;
    while(cin>>i>>j)
    {
        if(i==0&&j==0)
            break;
        if(j>i)
        {
            a=i;
            b=j;
        }
        else
        {
            a=j;
            b=i;
        }
        mx=0;
        for(n=a;n<=b;n++)
        {
            temp=n;
            cyc=0;
            while(1)
            {
                cyc++;
                if(temp==1)
                    break;
                if(temp%2==1)
                    temp=3*temp+1;
                else
                    temp=temp/2;
            }
            if(cyc>mx)
            {
                mx=cyc;
                r=n;
            }
        }
        cout<<"Between "<<i<<" and "<<j<<", "<<r<<" generates the longest sequence of "<<mx-1<<" values."<<endl;
        //cout<<i<<" "<<j<<" "<<mx<<"\n";
    }
}
