#include <iostream>
using namespace std;
int main()
{
    string h;
    int tc=1;
    while(getline(cin,h))
    {
        if(h=="*")
            break;
        if(h=="Hajj")
            cout<<"Case "<<tc++<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<tc++<<": Hajj-e-Asghar"<<endl;
    }
}
