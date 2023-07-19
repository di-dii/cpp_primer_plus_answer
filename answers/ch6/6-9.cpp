#include<iostream>
#include<cctype>
#include<string>
#include<fstream>
using namespace std;
struct Patron
{
    string name;
    double money;
};


int main()
{
    ifstream fin;
    fin.open("./6-9.txt");
    int numsP = 0;
    fin>>numsP;
    fin.get();
    Patron* patrons = new Patron [numsP];
    for(int i=0;i<numsP;i++){
        getline(fin, patrons[i].name);
        fin>>patrons[i].money;
        fin.get();
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