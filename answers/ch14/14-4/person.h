#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <iostream>
#include <random>

using namespace std;
class Person{
private:
    string first_name;
    string last_name;
protected:
    virtual void Data()const{cout<<"name: "<<first_name<<' '<<last_name<<endl;}
public:
    Person(const string& fn="", const string& ln=""):first_name(fn),last_name(ln){}
    virtual ~Person(){};
    virtual void Show()const = 0;
    virtual void Set(){
        cout<<"input name: ";
        cin>>first_name>>last_name;
    }
};

class Gunslinger: virtual public Person{
private:
    double get_gun_time;
    int sec_in_gun;
protected:
    void Data()const{cout<<"get_gun_time: "<<get_gun_time<<", sec_in_gun: "<<sec_in_gun<<endl;}
public:
    Gunslinger(double t=0, int s=0):get_gun_time(t),sec_in_gun(s){}
    double Draw(){return get_gun_time;}
    void set_get_gun_time(double t){get_gun_time=t;}
    void set_sec_in_gun(int s){sec_in_gun = s;}
    void Show()const{cout<<"kind: Gunslinger\n"; Person::Data(); Data();}
    void Set(){
        Person::Set();
        cout<<"input get_gun_time: ";
        cin>>get_gun_time;
        cout<<"input sec_in_gun: ";
        cin>>sec_in_gun;
    }
};

class PokerPlayer:virtual public Person{
public:
    int Draw(){return rand() % 52 + 1;}
    void Show()const{cout<<"kind: PokerPlayer\n";Person::Data();}
};

class BadDude:public Gunslinger,public PokerPlayer{
protected:
    void Data()const{}
public:
    double Gdraw(){return Gunslinger::Draw();}
    int Cdraw(){return PokerPlayer::Draw();}
    void Show()const{cout<<"kind: BadDude\n";Person::Data(); Gunslinger::Data();}
    void Set(){Gunslinger::Set();}
};


#endif