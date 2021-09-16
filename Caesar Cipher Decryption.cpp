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
    cin>>s; //enter the cipher text
    int key=0;
    cin>>key; //enter the key
    string c=""; //result string (plain text)
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            c += char(int(s[i]-65-key)%26+65);
        }
        else {
            c += char(int(s[i]-97-key)%26+97);
        }
    }
    cout<<c<<endl; //plain text
}
