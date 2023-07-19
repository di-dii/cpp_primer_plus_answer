#include<iostream>
#include<cctype>
using namespace std;

const int listsize=3;
struct bop
{
    char fullname[20];
    char title[20];
    char bopname[20];
    int preference;
};

void putfullname(const bop lists[]){
    for(int i=0;i<listsize;i++){
        cout<<lists[i].fullname<<endl;
    }
}
void puttitlename(const bop lists[]){
    for(int i=0;i<listsize;i++){
        cout<<lists[i].title<<endl;
    }
}
void putbopname(const bop lists[]){
    for(int i=0;i<listsize;i++){
        cout<<lists[i].bopname<<endl;
    }
}
void putpref(const bop lists[]){
    for(int i=0;i<listsize;i++){
        if(lists[i].preference==0)
            cout<<lists[i].fullname;
        else if(lists[i].preference==1)
            cout<<lists[i].title;
        else if(lists[i].preference==2)
            cout<<lists[i].bopname;
        cout<<endl;
    }
}


int main()
{
    bop lists[3]={{"Wimp Macho","A level","Wer",1},{"Raki Rhodes","B level","Rer",2},{"Celia Laiter","C level","Cer",0}};
    char ch;
    cout<<"Benevolent Order of Programmers Report\n"
    <<"a. display by name\t b. display by title\nc. display by bopname\t d. display by preference\nq. quit\n";
    cout<<"Enter your choice: ";
    cin>>ch;
    while (ch!='q')
    {
        switch (ch)
        {
        case 'a':
            putfullname(lists);
            break;
        case 'b':
            puttitlename(lists);
            break;
        case 'c':
            putbopname(lists);
            break;
        case 'd':
            putpref(lists);
            break;
        default:
            break;
        }
        cout<<"Next Choice: ";
        cin>>ch;
    }
    cout<<"Bye!";
    

    return 0;
}



//题目：