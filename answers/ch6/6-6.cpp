#include<iostream>
#include<cctype>
#include<string>
using namespace std;
struct Patron
{
    string name;
    double money;
};


int main()
{
    int numsP = 0;
    cin>>numsP;
    cin.get();
    Patron* patrons = new Patron [numsP];
    for(int i=0;i<numsP;i++){
        getline(cin, patrons[i].name);
        cin>>patrons[i].money;
        cin.get();
    }
    cout<<"\nGrand Patrons\n";
    bool notnone = false;
    for(int i=0;i<numsP;i++){
        if(patrons[i].money>10000){
            notnone = true;
            cout<<patrons[i].name<<' '<<patrons[i].money<<endl;
        }
    }
    if(!notnone) cout<<"none\n";
    notnone = false;
    cout<<"\nPatrons\n";
    for(int i=0;i<numsP;i++){
        if(patrons[i].money<=10000){
            notnone = true;
            cout<<patrons[i].name<<' '<<patrons[i].money<<endl;
        }
    }
    if(!notnone) cout<<"none\n";
    return 0;
}



//题目：