#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    cout<<"Please enter one of the following choices:\n"<<"c) carnivore\t p) pianist\nt) tree\t\t g) game\n";
    cin>>ch;
swiflag:
    switch (ch)
    {
    case 'c':
        cout<<"A maple is a carnivore.";
        break;
    case 'p':
        cout<<"A maple is a pianist.";
        break;
    case 't':
        cout<<"A maple is a tree.";
        break;
    case 'g':
        cout<<"A maple is a game.";
        break;
    default:
        cout<<"please enter a c, p, t, or g: ";
        cin>>ch;
        goto swiflag;
    }

    return 0;
}



//题目：