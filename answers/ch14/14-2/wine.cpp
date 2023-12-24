#include"wine.h"

Wine::Wine(){
    years=0;
}

Wine::Wine(const char* l, int y, const int yr[],const int bot[]):name(l),years(y),PairArray(std::make_pair(ArrayInt(yr,y),ArrayInt(bot,y))){
}

Wine::Wine(const char* l, int y):name(l),years(y),PairArray(std::make_pair(ArrayInt(y),ArrayInt(y))){
}

void Wine::GetBottles(){
    using std::cout;
    using std::cin;
    int bot=0;
    int temp_y, temp_b;
    while(bot<years){
        cout<<"input year and bottle numbers: ";
        cin>>temp_y;
        cin>>temp_b;
        PairArray::first[bot] = temp_y;
        PairArray::second[bot] = temp_b;
        bot++;
    }
}

std::string& Wine::Label(){
    return name;
}

int Wine::sum(){
    return PairArray::second.sum();
}

void Wine::Show(){
    using std::cout;
    cout<<"Wine: "<<name<<'\n';
    cout<<"\tYear\tBottles\n";
    for(int i=0;i<PairArray::first.size();i++){
        cout<<'\t'<<PairArray::first[i]<<
              '\t'<<PairArray::second[i]<<'\n';
    }
}