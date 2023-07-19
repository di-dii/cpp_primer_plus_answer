#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    while(cin.get(ch)&&ch!='@'){
        if(isdigit(ch))
            continue;
        if(isupper(ch))
            ch=tolower(ch);
        else if(islower(ch))
            ch=toupper(ch);
        cout<<ch;
    }

    return 0;
}



//题目：