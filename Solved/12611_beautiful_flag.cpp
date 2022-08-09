#include <iostream>
using namespace std;
int main()
{
    int t, r, tc=0;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<"Case "<<++tc<<":\n"<<-9*r/4<<" "<<3*r/2<<"\n"<<11*r/4<<" "<<3*r/2<<"\n"<<11*r/4<<" "<<-3*r/2<<"\n"<<-9*r/4<<" "<<-3*r/2<<endl;
    }
}
