#include<iostream>
#include<string>
using namespace std;

int main()
{
    string tempword;
    cout<<"Enter words (to stop, typr the word done):\n";
    cin>>tempword;
    int count=0;
    while (tempword!="done")
    {
        count+=1;
        cin>>tempword;
    }
    cout<<"You entered a total of "<<count<<" words.";

    return 0;
}



//题目：