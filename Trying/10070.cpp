#include <iostream>
using namespace std;
int main()
{
    long long unsigned int y;
    while(cin>>y)
    {
        if(y%400==0||(y%4==0&&y%100!=0&&y%400!=0))
        {
            if(y%15==0&&y%55==0)
            {
                cout<<"This is leap year."<<endl<<"This is huluculu festival year."<<endl<<"This is buluculu festival year.\n"<<endl;
            }
            else if(y%15==0)
            {
                cout<<"This is leap year."<<endl<<"This is huluculu festival year.\n"<<endl;
            }
            else if(y%55==0)
            {
                cout<<"This is leap year."<<endl<<"This is buluculu festival year.\n"<<endl;
            }
            else
            {
                cout<<"This is leap year.\n"<<endl;
            }
        }
        else
        {
            if(y%15==0)
            {
                cout<<"This is huluculu festival year.\n"<<endl;
            }
            else
            {
                cout<<"This is an ordinary year.\n"<<endl;
            }
        }
    }
}
