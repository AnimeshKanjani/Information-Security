#include <bits/stdc++.h>
using namespace std;
/*
************************************************
INPUT FORMAT -
PLAIN TEXT
KEY
************************************************
*/
//CODE-
int32_t main()
{

    string s;
    cin>>s; //enter the plain text
    int key=0;
    cin>>key; //enter the key
    string c=""; //result string (cipher teext)
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            c += char(int(s[i]-65+key)%26+65);
        }
        else {
            c += char(int(s[i]-97+key)%26+97);
        }
    }
    cout<<c<<endl; //cipher text

    /* considering the above cipher text as the cipher input
    and the key same as previous.
    Make proper changes according to you or you can find individual
    codes in my Github */
    string p=""; //result string (plain text)
    for(int i=0;i<c.size();i++)
    {
        if(isupper(c[i]))
        {
            p += char(int(c[i]-key-65)%26+65);
        }
         else {
            p += char(int(c[i]-key-97)%26+97);
        }
    }
    cout<<p; //plain text
}
