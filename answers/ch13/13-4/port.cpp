#include "port.h"

Port::Port(const char* br,const char* st,int b){
    brand = new char[strlen(br)+1];
    strcpy(brand,br);
    strcpy(style,st);
    bottles = b;
}

Port::Port(const Port& p){
    brand = new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles = p.bottles;    
}

Port & Port::operator=(const Port& p){
    if(this==&p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);
    strcpy(style,p.style);
    bottles = p.bottles; 
    return *this;
}

Port & Port::operator+=(int b){
    bottles+=b;
    return *this;
}

Port & Port::operator-=(int b){
    if(bottles>=b) bottles -= b;
    return *this;
}

void Port::Show() const{
    cout<<"Brand: "<<brand;
    cout<<"\nKind: "<<style;
    cout<<"\nBottles: "<<bottles<<endl;
}

ostream & operator<<(ostream &os, const Port& p){
    os<<p.brand<<" ,"<<p.style<<", "<<p.bottles;
    return os;
}

VintagePort::VintagePort():Port("none","vintage",0){
    nickname = new char[1];
    nickname[0] = '\0';
    year=0;
}

VintagePort::VintagePort(const char* br,int b,const char* nn,int y):Port(br,"vintage",b){
    nickname = new char[strlen(nn)+1];
    strcpy(nickname,nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort& vp):Port(vp){
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp){
    if(this == &vp)
        return *this;
    delete [] nickname;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);
    year = vp.year;   
    return *this;
}

void VintagePort::Show() const{
    Port::Show();
    cout<<"nickname: "<<nickname;
    cout<<"\nyear: "<<year<<endl;
}

ostream& operator<<(ostream & os, const VintagePort& vp){
    os<<Port(vp)<<", "<<vp.nickname<<", "<<vp.year;
    return os;
}

/*
class Port{
private:
    char * brand;
    char style[20];
    int bottles;
public:
    Port(const char* br="none",const char *st="none",int b=0);
    Port(const Port &p);
    virtual ~Port(){delete [] brand;}
    Port & operator=(const Port& p);
    Port & operator+=(int b);
    Port & operator-=(int b);
    int BottleCount() const{return bottles;}
    virtual void Show() const;
    friend ostream & operator<<(ostream &os, const Port& p);
};

class VintagePort:public Port{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char*br,int b, const char* nn,int year);
    VintagePort(const VintagePort& vp);
    ~VintagePort(){delete[] nickname;}
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend ostream& operator<<(ostream & os, const VintagePort& vp);
};
*/