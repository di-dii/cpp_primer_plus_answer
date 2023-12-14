#include "dma.h"

using std::strcpy;
using std::strlen;
using std::cout;

dmaABC::dmaABC(const char* l="null",int r=0){
    label = new char[strlen(l)+1];
    strcpy(label,l);
    rating = r;
}

dmaABC::dmaABC(const dmaABC& d){
    label = new char[strlen(d.label)+1];
    strcpy(label,d.label);
    rating = d.rating;  
}

dmaABC& dmaABC::operator=(const dmaABC& d){
    if(this==&d)
        return *this;
    delete[] label;
    label = new char[strlen(d.label)+1];
    strcpy(label,d.label);
    rating = d.rating; 
    return *this;   
}

dmaABC::~dmaABC(){
    delete [] label;
}

void baseDMA::View() const{
    cout<<"(baseDMA)\n";
    cout<<"label: "<<get_label()<<'\n';
}


lacksDMA::lacksDMA(const char* c="none",const char* l="null",int r=0):dmaABC(l,r){
    strcpy(color,c);
}

void lacksDMA::View() const{
    cout<<"(lacksDMA)\n";
    cout<<"label: "<<get_label()<<'\n';
    cout<<"color: "<<color<<'\n';
}


hasDMA::hasDMA(const char* s="none",const char* l="null",int r=0):dmaABC(l,r){
    style = new char[strlen(s)+1];
    strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA& h):dmaABC(h){
    style = new char[strlen(h.style)+1];
    strcpy(style,h.style);    
}

hasDMA& hasDMA::operator=(const hasDMA& h){
    if(this==&h)
        return *this;
    delete [] style;
    dmaABC::operator=(h);
    style = new char[strlen(h.style)+1];
    strcpy(style,h.style);
    return *this;    
}

hasDMA::~hasDMA(){
    delete [] style;
}

void hasDMA::View() const{
    cout<<"(hasDMA)\n";
    cout<<"label: "<<get_label()<<'\n';
    cout<<"style: "<<style<<'\n';   
}