#ifndef DMA_H_
#define DMA_H_
#include<cstring>
#include<iostream>

class dmaABC{
private:
    char * label;
    int rating;
public:
    dmaABC(const char* l,int r);
    dmaABC(const dmaABC& d);
    virtual ~dmaABC();
    dmaABC& operator=(const dmaABC& d);
    const char* get_label() const{return label;}
    virtual void View() const=0;
};

class baseDMA:public dmaABC{
public:
    baseDMA(const char* l,int r):dmaABC(l,r){}
    virtual void View() const;
};

class lacksDMA:public dmaABC{
private:
    char color[40];
public:
    lacksDMA(const char* c,const char* l,int r);
    virtual void View() const;
};

class hasDMA:public dmaABC{
private:
    char * style;
public:
    hasDMA(const char* s,const char* l,int r);
    hasDMA(const hasDMA& h);
    virtual ~hasDMA();
    hasDMA& operator=(const hasDMA& h);
    virtual void View() const;
};

#endif