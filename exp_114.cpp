#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s="Whoa!";
    char ch;

    for(int i=0; i<s.length(); i++)
    {
        ch=s[i];
        printf("%c", ch);
    }


    return 0;
}
