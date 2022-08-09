#include <iostream>
using namespace std;
int main()
{
    int tc=1;
    string s;
    while(cin>>s)
    {
        if(s=="#") break;
        if(s=="HELLO") cout<<"Case "<<tc++<<": ENGLISH";
        else if(s=="HOLA") cout<<"Case "<<tc++<<": SPANISH";
        else if(s=="HALLO") cout<<"Case "<<tc++<<": GERMAN";
        else if(s=="BONJOUR") cout<<"Case "<<tc++<<": FRENCH";
        else if(s=="CIAO") cout<<"Case "<<tc++<<": ITALIAN";
        else if(s=="ZDRAVSTVUJTE") cout<<"Case "<<tc++<<": RUSSIAN";
        else cout<<"UNKNOWN";
        cout<<endl;
    }
}
