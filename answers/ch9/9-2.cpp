#include <iostream>
#include <string>

void strcount(const std::string& str);

int main(){
    using namespace std;
    string input;

    cout<<"Enter a line:\n";
    getline(cin,input);
    while(input!=""){
        strcount(input);
        cout<<"Enter next line (empty line to quit):\n";
        getline(cin,input);
    }

    return 0;
}

void strcount(const std::string& str){
    using namespace std;
    static int total=0;
    int count=0;

    total += str.size();
    cout<<"\""<<str<<"\" contains "
    <<str.size()<<" characters\n"
    <<total<<" characters total\n";
}