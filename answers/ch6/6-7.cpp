#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string str;
    int nvowel=0;
    int nconsonant=0;
    int nother=0;
    cin>>str;
    while(str!="q"){
        if(isalpha(str[0])){
            if(str[0]=='A'||str[0]=='E'||str[0]=='I'||str[0]=='O'||str[0]=='U'||
            str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u' )
                nvowel++;
            else    nconsonant++;
        }
        else    nother++;
        cin>>str;
    };
    cout<<nvowel<<" words beginning with vowels\n"
    <<nconsonant<<" words beginning with consonants\n"
    <<nother<<" others\n";

    return 0;
}



//题目：