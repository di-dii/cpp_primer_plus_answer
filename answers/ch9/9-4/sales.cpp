#include <iostream>
#include "sales.h"

namespace SALES{
    // const int QUARTERS = 4;
    // struct Sales
    // {
    //     double sales[QUARTERS];
    //     double average;
    //     double max;
    //     double min;
    // };

    void setSales(Sales& s, const double ar[],int n){
        n = n<=QUARTERS ? n:QUARTERS;
        if(n>0) s.max = s.min = ar[0];
        else return;
        double sum = 0;
        for(int i=0;i<n;i++){
            sum += ar[i];
            s.sales[i] = ar[i];
            s.max = s.max<ar[i] ? ar[i]:s.max;
            s.min = s.min>ar[i] ? ar[i]:s.min;
        }
        s.average = sum/n;
        for(int i=n;i<QUARTERS;i++)
            s.sales[i]=0;
    }

    void setSales(Sales& s){
        using namespace std;
        double sum = 0;
        for(int i=0;i<QUARTERS;i++){
            cout<<"please enter sales: ";
            cin>>s.sales[i];
            sum += s.sales[i];
        }
        s.max = s.min = s.sales[0];
        for(int i=0;i<QUARTERS;i++){
            s.max = s.max<s.sales[i] ? s.sales[i]:s.max;
            s.min = s.min>s.sales[i] ? s.sales[i]:s.min;
        }
        s.average = sum/QUARTERS;
    }

    void showSales(const Sales & s){
        using std::cout;
        using std::endl;
        cout<<"the sales are: \n";
        for(int i=0;i<QUARTERS;i++)
            cout<<s.sales[i]<<' ';
        cout<<endl;
        cout<<"average is: "<<s.average<<endl;
        cout<<"max is: "<<s.max<<endl;
        cout<<"min is: "<<s.min<<endl;
    }
    
}