#ifndef EMP_H_
#define EMP_H_


#include <iostream>
#include <string>
using namespace std;

class abstr_emp{
private:
    std::string fname;
    std::string lname;
    std::string job;
public:
    abstr_emp(){}
    abstr_emp(const string& fn,const string& ln,const string& j):fname(fn),lname(ln),job(j){}
    virtual void ShowAll() const{cout<<"name: "<<fname<<' '<<lname<<"\njob: "<<job<<endl;}
    virtual void SetAll(){cout<<"input name: "; cin>>fname>>lname; cout<<"input job: "; cin>>job;}
    friend std::ostream& operator<<(std::ostream& os,const abstr_emp& e){
        os<<e.fname<<' '<<e.lname<<' '<<e.job;
        return os;
    }
    virtual ~abstr_emp() {};
};

class employee: public abstr_emp{
public:
    employee(){}
    employee(const string& fn,const string& ln,const string& j):abstr_emp(fn,ln,j){}
    virtual void ShowAll() const{abstr_emp::ShowAll();};
    virtual void SetAll(){abstr_emp::SetAll();};
};

class manager: virtual public abstr_emp{
private:
    int inchargeof;
protected:
    int InChargeOf() const{return inchargeof;}
    int &InChargeOf(){return inchargeof;}
public:
    manager(){};
    manager(const string& fn,const string& ln,const string& j,int ico=0):abstr_emp(fn,ln,j),inchargeof(ico){}
    manager(const abstr_emp& e, int ico):abstr_emp(e),inchargeof(ico){}
    manager(const manager& m):abstr_emp(m),inchargeof(m.InChargeOf()){}
    virtual void ShowAll() const{abstr_emp::ShowAll(); cout<<"inchargeof: "<<InChargeOf()<<'\n';}
    virtual void SetAll(){abstr_emp::SetAll();cout<<"input inchargeof: "; cin>>InChargeOf();}
};

class fink: virtual public abstr_emp{
private:
    string reportsto;
protected:
    const string ReportsTo()const {return reportsto;}
    string & ReportsTo(){return reportsto;}
public:
    fink(){};
    fink(const string& fn,const string& ln,const string& j,const string& r):
        abstr_emp(fn,ln,j),reportsto(r){}
    fink(const abstr_emp& e, const string& r):abstr_emp(e),reportsto(r){}
    fink(const fink& f):abstr_emp(f),reportsto(f.ReportsTo()){}
    virtual void ShowAll()const{abstr_emp::ShowAll();cout<<"reportsto: "<<ReportsTo()<<'\n';}
    virtual void SetAll(){abstr_emp::SetAll();cout<<"input reportsto: "; cin>>ReportsTo();}
};


class highfink: public manager, public fink{
public:
    highfink(){};
    highfink(const string& fn,const string& ln,const string& j,const string& r,int ico):
        manager(fn,ln,j,ico),fink(fn,ln,j,r){}
    highfink(const abstr_emp& e, const string& r, int ico):manager(e,ico),fink(e,r){}
    highfink(const fink& f,int ico):fink(f),manager(f,ico){}
    highfink(const manager& m, const string& r):abstr_emp(m),manager(m),fink(m,r){}
    highfink(const highfink& h):manager(h),fink(h){}
    virtual void ShowAll()const{abstr_emp::ShowAll();cout<<"inchargeof: "<<InChargeOf()<<'\n';
        cout<<"reportsto: "<<ReportsTo()<<'\n';}
    virtual void SetAll(){abstr_emp::SetAll();cout<<"input inchargeof: "; cin>>InChargeOf();
        cout<<"input reportsto: "; cin>>ReportsTo();}
};



#endif