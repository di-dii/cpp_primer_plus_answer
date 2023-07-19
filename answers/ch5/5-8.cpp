#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char tempword[20];
    cout<<"Enter words (to stop, typr the word done):\n";
    cin>>tempword;
    int count=0;
    while (strcmp(tempword,"done"))
    {
        count+=1;
        cin>>tempword;
    }
    cout<<"You entered a total of "<<count<<" words.";

    return 0;
}



//题目：