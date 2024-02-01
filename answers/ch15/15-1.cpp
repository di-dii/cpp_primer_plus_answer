#include<iostream>
using namespace std;

class Remote;
class Tv{
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;
    enum {Off, On};
    enum {MinVal,MaxVal=20};
    enum {Antenna,Cable};
    enum {TV,DVD};

    Tv(int s = Off, int mc = 125): state(s),volume(5),maxchannel(mc),channel(2),
                                    mode(Cable),input(TV){};
    void onoff(){state = (state==On)?Off:On;}
    bool ison() const{return state==On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){mode = (mode==Antenna)?Cable:Antenna;}
    void set_input(){ input = (input==TV)?DVD:TV;}
    void settings() const;
    void set_remote_mode(Remote& r);
};

class Remote{
private:
    int mode;
    int remote_mode;
public:
    friend class Tv;
    enum {Normal, Interactive};
    Remote(int m=Tv::TV): mode(m),remote_mode(Normal){}
    bool volup(Tv& t) {return t.volup();}
    bool voldown(Tv& t) {return t.voldown();}
    void onoff(Tv& t) {t.onoff();}
    void chanup(Tv& t) {t.chanup();}
    void chandown(Tv& t) {t.chandown();}
    void set_chan(Tv& t, int c) {t.channel=c;}
    void set_mode(Tv& t) {t.set_mode();}
    void set_input(Tv& t) {t.set_input();}
    void show_remote_mode() {cout<<"Remote mode = "<<(remote_mode==Normal?"Normal":"Interactive")<<endl;}
};

bool Tv::volup(){
    if(volume<MaxVal){
        volume++;
        return true;
    }else
        return false;
}

bool Tv::voldown(){
    if(volume>MinVal){
        volume--;
        return true;
    }else{
        return false;
    }
}

void Tv::chanup(){
    if(channel<maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown(){
    if(channel>1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings() const{
    cout<<"TV is "<<(state==Off?"Off":"On")<<endl;
    if(state == On){
        cout<<"Volume setting = "<<volume<<endl;
        cout<<"Channel setting = "<<channel<<endl;
        cout<<"Mode = "<<(mode == Antenna?"Antenna":"Cable")<<endl;
        cout<<"Input = "<<(input == TV?"TV":"DVD")<<endl;
    }
}

void Tv::set_remote_mode(Remote& r){
    if(state == Off) return;
    r.remote_mode = (r.remote_mode == Remote::Normal)?
                    Remote::Interactive:Remote::Normal;
}


// test program

int main(){
    Tv s42;
    cout<<"Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout<<"\nAdjusted settings for 42\" TV:\n";
    s42.settings();
    s42.chanup();
    cout<<"\nAdjusted settings for 42\" TV:\n";

    Remote grey;

    grey.set_chan(s42,10);
    grey.volup(s42);
    grey.volup(s42);
    cout<<"\n42\" settings after using remote:\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout<<"\n58\" settings:\n";
    s58.settings();

    cout<<endl;
    s58.set_remote_mode(grey);
    grey.show_remote_mode();
    s58.set_remote_mode(grey);
    grey.show_remote_mode();
    s58.onoff();
    s58.settings();
    s58.set_remote_mode(grey);
    grey.show_remote_mode();

    return 0;
}

